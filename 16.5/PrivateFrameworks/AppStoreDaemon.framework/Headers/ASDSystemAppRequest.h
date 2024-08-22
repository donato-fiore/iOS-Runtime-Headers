// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDSYSTEMAPPREQUEST_H
#define ASDSYSTEMAPPREQUEST_H

@class NSString, NSNumber;


#import "ASDPersistentRequest.h"

@interface ASDSystemAppRequest : ASDPersistentRequest

@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSNumber *storeItemID; // ivar: _storeItemID
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated; // ivar: _userInitiated


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBundleID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif