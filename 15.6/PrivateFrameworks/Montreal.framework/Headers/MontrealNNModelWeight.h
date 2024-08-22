// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MONTREALNNMODELWEIGHT_H
#define MONTREALNNMODELWEIGHT_H

@class NSString, NSArray, NSNumber, NSData;
@protocol MontrealNNDescriptionProtocol;


#import "MontrealNNDescription.h"
#import "MontrealNNModelQuantization.h"

@interface MontrealNNModelWeight : MontrealNNDescription <MontrealNNDescriptionProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *dimension; // ivar: _dimension
@property (readonly) NSUInteger hash;
@property (readonly) NSNumber *index; // ivar: _index
@property (readonly) NSString *jsonDir; // ivar: _jsonDir
@property (readonly) NSString *name; // ivar: _name
@property (readonly) MontrealNNModelQuantization *quantization; // ivar: _quantization
@property (readonly) Class superclass;
@property (readonly) NSData *weightData; // ivar: _weightData
@property (readonly) NSArray *weightValues; // ivar: _weightValues


-(id)checkForValidity;
-(id)createConvertArrayToData:(id)arg0 quantization:(id)arg1 ;
-(id)createDataContainer;
-(id)createflattenWeightsFile:(id)arg0 ;
-(id)createflattenWeightsHierarchy:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 quantization:(id)arg1 jsonDir:(id)arg2 ;
-(id)initWithName:(id)arg0 index:(id)arg1 dimension:(id)arg2 ;
-(id)initWithName:(id)arg0 index:(id)arg1 dimension:(id)arg2 weightData:(id)arg3 ;
-(id)initWithName:(id)arg0 index:(id)arg1 dimension:(id)arg2 weightValues:(id)arg3 ;
-(id)jsonDescription;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)generateJSONAtPath:(id)arg0 ;


@end


#endif