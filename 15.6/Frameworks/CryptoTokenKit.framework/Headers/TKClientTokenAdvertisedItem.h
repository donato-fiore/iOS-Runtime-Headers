// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKCLIENTTOKENADVERTISEDITEM_H
#define TKCLIENTTOKENADVERTISEDITEM_H

@class NSDictionary, NSString, NSData;

#import <Foundation/Foundation.h>

#import "TKClientTokenSession.h"

@interface TKClientTokenAdvertisedItem : NSObject {
    id *_secRef;
}


@property (readonly, nonatomic) *__SecCertificate certificateRef;
@property (readonly, nonatomic) *__SecIdentity identityRef;
@property (readonly, nonatomic) *__SecKey keyRef;
@property (readonly, nonatomic) NSUInteger keyUsage;
@property (readonly, nonatomic) NSDictionary *keychainAttributes; // ivar: _keychainAttributes
@property (readonly, nonatomic) id *keychainClass;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSData *objectID;
@property (readonly, nonatomic) TKClientTokenSession *session; // ivar: _session


-(id)initWithSession:(id)arg0 keychainAttributes:(id)arg1 secRef:(id)arg2 ;


@end


#endif