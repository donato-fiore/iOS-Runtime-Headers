// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSYNCEDSOCIALHIGHLIGHT_H
#define PPSYNCEDSOCIALHIGHLIGHT_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PPSocialHighlight.h"

@interface PPSyncedSocialHighlight : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PPSocialHighlight *highlight; // ivar: _highlight
@property (readonly, nonatomic) NSString *originatingDeviceId; // ivar: _originatingDeviceId
@property (readonly, nonatomic) NSDate *rankingDate; // ivar: _rankingDate


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHighlight:(id)arg0 rankingDate:(id)arg1 originatingDeviceId:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif