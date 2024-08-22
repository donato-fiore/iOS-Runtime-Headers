// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOSMARTCARDENTRY_H
#define SOSMARTCARDENTRY_H

@class NSDictionary, NSString, NSData;

#import <Foundation/Foundation.h>


@interface SOSmartcardEntry : NSObject

@property (retain) NSDictionary *attributes; // ivar: _attributes
@property (retain) NSString *certName; // ivar: _certName
@property *__SecIdentity identity; // ivar: _identity
@property (retain) NSData *persistientRef; // ivar: _persistientRef
@property (retain) NSString *tokenID; // ivar: _tokenID
@property (retain) NSString *upn; // ivar: _upn




@end


#endif