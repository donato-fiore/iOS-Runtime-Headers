// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDREPAIROPTIONS_H
#define ASDREPAIROPTIONS_H

@class NSNumber, NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDRepairOptions : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSNumber *accountDSID; // ivar: _accountDSID
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *bundlePath; // ivar: _bundlePath
@property (readonly, nonatomic) NSInteger claimStyle; // ivar: _claimStyle
@property (nonatomic) NSUInteger exitReason; // ivar: _exitReason
@property (nonatomic) int fairplayStatus; // ivar: _fairplayStatus
@property (nonatomic) BOOL forceRevoke; // ivar: _forceRevoke
@property (nonatomic) BOOL forceUpsell; // ivar: _forceUpsell
@property (nonatomic) BOOL isBackground; // ivar: _isBackground
@property (copy, nonatomic) NSDictionary *relaunchOptions; // ivar: _relaunchOptions


+(BOOL)supportsSecureCoding;
-(id)copyUserInfoDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleID:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 accountIdentifier:(id)arg1 claimStyle:(NSInteger)arg2 ;
-(id)initWithBundlePath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif