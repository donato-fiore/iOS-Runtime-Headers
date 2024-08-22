// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSAVEDACCOUNTSIDECAR_H
#define WBSSAVEDACCOUNTSIDECAR_H

@class NSDictionary, NSDate, NSString, NSURLProtectionSpace;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WBSPasswordWarningHideMarker.h"
#import "WBSTOTPGenerator.h"

@interface WBSSavedAccountSidecar : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) WBSPasswordWarningHideMarker *hideWarningMarker; // ivar: _hideWarningMarker
@property (copy, nonatomic) NSDate *lastOneTimeShareDateForPasskey; // ivar: _lastOneTimeShareDateForPasskey
@property (copy, nonatomic) NSString *notesEntry; // ivar: _notesEntry
@property (retain, nonatomic) NSDictionary *originalKeychainDictionary; // ivar: _originalKeychainDictionary
@property (readonly, copy, nonatomic) NSURLProtectionSpace *protectionSpace; // ivar: _protectionSpace
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator; // ivar: _totpGenerator
@property (copy, nonatomic) NSString *user; // ivar: _user


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSidecarDataEqualForMergingSavedAccounts:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithUser:(id)arg0 protectionSpace:(id)arg1 ;
-(id)initWithUser:(id)arg0 protectionSpace:(id)arg1 data:(id)arg2 ;


@end


#endif