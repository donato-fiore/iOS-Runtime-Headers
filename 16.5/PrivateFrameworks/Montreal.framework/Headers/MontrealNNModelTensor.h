// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MONTREALNNMODELTENSOR_H
#define MONTREALNNMODELTENSOR_H

@class NSHashTable, NSString, NSArray;
@protocol NSCopying, MontrealNNDescriptionProtocol;


#import "MontrealNNDescription.h"

@interface MontrealNNModelTensor : MontrealNNDescription <NSCopying, MontrealNNDescriptionProtocol>



@property (readonly) NSHashTable *asInput; // ivar: _asInput
@property (readonly) NSHashTable *asOutput; // ivar: _asOutput
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *dimension; // ivar: _dimension
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(id)createInputs:(struct ? *)arg0 inputChunks:(id)arg1 nodeName:(id)arg2 ;
+(id)createOutputs:(struct ? *)arg0 outputChunks:(id)arg1 nodeName:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)tensorSize;
-(id)checkForValidity;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithName:(id)arg0 dimension:(id)arg1 ;
-(id)jsonDescription;
-(void)description:(id)arg0 indent:(id)arg1 ;


@end


#endif