// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPCOMPLICATIONDATA_H
#define SPCOMPLICATIONDATA_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPComplicationData : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat timeToLive; // ivar: _timeToLive
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif