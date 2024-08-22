// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTUSERACTIVITY_H
#define CKCONTEXTUSERACTIVITY_H

@class NSData, NSString, NSDate, NSNumber, NSUserActivity, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKContextUserActivity : NSObject <NSSecureCoding>

 {
    CGFloat _recordedTimeIntervalSince1970;
    NSData *_userActivityData;
}


@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (weak, nonatomic) NSDate *entryDate;
@property (copy, nonatomic) NSNumber *numberOfOccurrences; // ivar: _numberOfOccurrences
@property (readonly, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserActivity:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareForDonationWithCompletionHandler:(id)arg0 ;


@end


#endif