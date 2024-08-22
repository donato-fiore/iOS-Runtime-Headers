// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKTOKEN_H
#define TKTOKEN_H

@protocol TKTokenDelegate;

#import <Foundation/Foundation.h>

#import "TKTokenConfiguration.h"
#import "TKTokenKeychainContents.h"
#import "TKTokenDriver.h"
#import "TKTokenID.h"

@interface TKToken : NSObject {
    TKTokenConfiguration *_configuration;
}


@property (readonly) TKTokenConfiguration *configuration;
@property (weak) NSObject<TKTokenDelegate> *delegate; // ivar: _delegate
@property (retain) TKTokenKeychainContents *keychainContents; // ivar: _keychainContents
@property (readonly) TKTokenDriver *tokenDriver; // ivar: _tokenDriver
@property (readonly) TKTokenID *tokenID; // ivar: _tokenID


-(id)description;
-(id)initWithTokenDriver:(id)arg0 instanceID:(id)arg1 ;
-(void)terminate;


@end


#endif