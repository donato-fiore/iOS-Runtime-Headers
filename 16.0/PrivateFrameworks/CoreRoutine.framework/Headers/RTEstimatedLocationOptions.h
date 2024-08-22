// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTESTIMATEDLOCATIONOPTIONS_H
#define RTESTIMATEDLOCATIONOPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTEstimatedLocationOptions : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat averageSpeed; // ivar: _averageSpeed
@property (readonly, nonatomic) BOOL enableFallbackModel; // ivar: _enableFallbackModel
@property (readonly, nonatomic) CGFloat timeInterval; // ivar: _timeInterval


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithAverageSpeed:(CGFloat)arg0 enableFallbackModel:(BOOL)arg1 timeInterval:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif