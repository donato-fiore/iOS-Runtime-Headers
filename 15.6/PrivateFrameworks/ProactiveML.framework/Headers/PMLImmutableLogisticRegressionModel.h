// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLIMMUTABLELOGISTICREGRESSIONMODEL_H
#define PMLIMMUTABLELOGISTICREGRESSIONMODEL_H

@class NSString;
@protocol PMLPlistAndChunksSerializableProtocol, PMLMultiLabelClassifierProtocol;

#import <Foundation/Foundation.h>


@interface PMLImmutableLogisticRegressionModel : NSObject <PMLPlistAndChunksSerializableProtocol, PMLMultiLabelClassifierProtocol>

 {
    id *_backingObject;
    *float _weights;
    int _length;
    BOOL _intercept;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)intercept;
-(NSUInteger)outputDimension;
-(id)initWithChunk:(id)arg0 intercept:(BOOL)arg1 ;
-(id)initWithFloatsNoCopy:(*float)arg0 count:(int)arg1 intercept:(BOOL)arg2 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)initWithWeights:(id)arg0 intercept:(BOOL)arg1 ;
-(id)predict:(id)arg0 ;
-(id)toChunk;
-(id)toPlistWithChunks:(id)arg0 ;


@end


#endif