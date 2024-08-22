// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCDEVICEOPS_H
#define MLCDEVICEOPS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLCDeviceOps : NSObject <NSCopying>



@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (retain, nonatomic) id *result; // ivar: _result
@property (nonatomic) BOOL resultOfForwardNeededForGradient; // ivar: _resultOfForwardNeededForGradient
@property (retain, nonatomic) id *secondarySource; // ivar: _secondarySource
@property (retain, nonatomic) id *source; // ivar: _source
@property (nonatomic) BOOL sourceOfForwardNeededForGradient; // ivar: _sourceOfForwardNeededForGradient
@property (retain, nonatomic) id *tertiarySource; // ivar: _tertiarySource


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSource:(id)arg0 secondarySource:(id)arg1 result:(id)arg2 batchSize:(NSUInteger)arg3 ;


@end


#endif