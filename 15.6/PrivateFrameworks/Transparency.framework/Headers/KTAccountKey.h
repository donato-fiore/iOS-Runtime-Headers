// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTACCOUNTKEY_H
#define KTACCOUNTKEY_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "TransparencyApplication.h"

@interface KTAccountKey : NSObject

@property (retain) NSData *_accountPublicKeyInfo; // ivar: __accountPublicKeyInfo
@property (readonly) NSData *accountPublicKey;
@property (readonly) NSData *accountPublicKeyInfo;
@property (retain) TransparencyApplication *application; // ivar: _application
@property (readonly) NSString *applicationIdentifier; // ivar: _applicationIdentifier


-(id)initWithApplication:(id)arg0 ;
-(void)rollKey:(id)arg0 ;
-(void)signData:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif