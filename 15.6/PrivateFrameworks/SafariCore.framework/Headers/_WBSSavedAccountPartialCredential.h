// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WBSSAVEDACCOUNTPARTIALCREDENTIAL_H
#define _WBSSAVEDACCOUNTPARTIALCREDENTIAL_H

@class NSDate, NSData, NSURLProtectionSpace;

#import <Foundation/Foundation.h>


@interface _WBSSavedAccountPartialCredential : NSObject

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSData *persistentIdentifier; // ivar: _persistentIdentifier
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace; // ivar: _protectionSpace


-(id)initWithProtectionSpace:(id)arg0 date:(id)arg1 persistentIdentifier:(id)arg2 ;


@end


#endif