// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSYACTIVITYINFO_H
#define PSYACTIVITYINFO_H

@class NSString, NSArray, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PSYActivityInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *backboardPrelaunchBundleIdentifier; // ivar: _backboardPrelaunchBundleIdentifier
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (copy, nonatomic) NSString *priority; // ivar: _priority
@property (copy, nonatomic) NSArray *sessionTypes; // ivar: _sessionTypes
@property (copy, nonatomic) NSNumber *timeoutSeconds; // ivar: _timeoutSeconds


+(BOOL)supportsSecureCoding;
+(id)activityWithPlist:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif