// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDREPAIRAPPLICATIONREQUESTOPTIONS_H
#define ASDREPAIRAPPLICATIONREQUESTOPTIONS_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDRepairApplicationRequestOptions : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSNumber *accountDSID; // ivar: _accountDSID
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSInteger claimStyle; // ivar: _claimStyle
@property (nonatomic) NSUInteger exitReason; // ivar: _exitReason


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleID:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 accountIdentifier:(id)arg1 claimStyle:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif