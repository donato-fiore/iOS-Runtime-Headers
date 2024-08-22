// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DECOLLECTIONPROGRESS_H
#define DECOLLECTIONPROGRESS_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DECollectionProgress : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *estimatedTimeRemaining; // ivar: _estimatedTimeRemaining
@property (nonatomic) CGFloat percentComplete; // ivar: _percentComplete
@property (retain, nonatomic) NSString *statusString; // ivar: _statusString


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPercentComplete:(CGFloat)arg0 ;
-(id)initWithPercentComplete:(CGFloat)arg0 withEstimatedTimeRemaining:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif