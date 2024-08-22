// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSAVEDACCOUNTSIDECAR_H
#define WBSSAVEDACCOUNTSIDECAR_H

@class NSString, NSDictionary, NSDate, NSURLProtectionSpace;
@protocol WBSSavedAccountSidecarInternal, NSCopying, WBSSavedAccountSidecar;

#import <Foundation/Foundation.h>

#import "WBSPasswordWarningHideMarker.h"
#import "WBSTOTPGenerator.h"

@interface WBSSavedAccountSidecar : NSObject <WBSSavedAccountSidecarInternal, NSCopying, WBSSavedAccountSidecar>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WBSPasswordWarningHideMarker *hideWarningMarker; // ivar: _hideWarningMarker
@property (copy, nonatomic) NSDate *lastOneTimeShareDateForPasskey; // ivar: _lastOneTimeShareDateForPasskey
@property (copy, nonatomic) NSString *notesEntry; // ivar: _notesEntry
@property (retain, nonatomic) NSDictionary *originalKeychainDictionary; // ivar: _originalKeychainDictionary
@property (readonly, copy, nonatomic) NSURLProtectionSpace *protectionSpace; // ivar: _protectionSpace
@property (readonly) Class superclass;
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator; // ivar: _totpGenerator
@property (copy, nonatomic) NSString *user; // ivar: _user


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSidecarDataEqualForMergingSavedAccounts:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUser:(id)arg0 protectionSpace:(id)arg1 ;
-(id)initWithUser:(id)arg0 protectionSpace:(id)arg1 dictionaryRepresentation:(id)arg2 ;


@end


#endif