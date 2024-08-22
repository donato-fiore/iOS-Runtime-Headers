// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYPRODUCERRESULT_H
#define PXSTORYPRODUCERRESULT_H

@class NSError, NSNumber;

#import <Foundation/Foundation.h>


@interface PXStoryProducerResult : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly, nonatomic) NSNumber *fractionCompleted; // ivar: _fractionCompleted
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly, nonatomic) id *object; // ivar: _object
@property (readonly, nonatomic) CGFloat productionDuration; // ivar: _productionDuration


+(id)nullResult;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)deliveredNowWithRequestTime:(CGFloat)arg0 ;
-(id)description;
-(id)error:(id)arg0 ;
-(id)flags:(NSUInteger)arg0 ;
-(id)fractionCompleted:(float)arg0 ;
-(id)init;
-(id)initWithObject:(id)arg0 ;


@end


#endif