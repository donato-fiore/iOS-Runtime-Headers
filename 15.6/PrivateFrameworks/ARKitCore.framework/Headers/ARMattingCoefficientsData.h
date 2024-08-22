// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARMATTINGCOEFFICIENTSDATA_H
#define ARMATTINGCOEFFICIENTSDATA_H

@class NSString;
@protocol ARResultData;

#import <Foundation/Foundation.h>


@interface ARMattingCoefficientsData : NSObject <ARResultData>



@property (readonly, nonatomic) *__CVBuffer coefficientsBuffer; // ivar: _coefficientsBuffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithTimestamp:(CGFloat)arg0 coefficientsBuffer:(struct __CVBuffer *)arg1 ;
-(void)dealloc;


@end


#endif