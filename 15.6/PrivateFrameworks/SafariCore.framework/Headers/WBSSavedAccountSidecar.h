// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSAVEDACCOUNTSIDECAR_H
#define WBSSAVEDACCOUNTSIDECAR_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "WBSPasswordWarningHideMarker.h"
#import "WBSTOTPGenerator.h"

@interface WBSSavedAccountSidecar : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) WBSPasswordWarningHideMarker *hideWarningMarker; // ivar: _hideWarningMarker
@property (readonly, nonatomic) NSString *host; // ivar: _host
@property (copy, nonatomic) NSString *notesEntry; // ivar: _notesEntry
@property (retain, nonatomic) NSDictionary *originalKeychainDictionary; // ivar: _originalKeychainDictionary
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator; // ivar: _totpGenerator
@property (copy, nonatomic) NSString *user; // ivar: _user


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSidecarDataEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithUser:(id)arg0 host:(id)arg1 ;
-(id)initWithUser:(id)arg0 host:(id)arg1 data:(id)arg2 ;


@end


#endif