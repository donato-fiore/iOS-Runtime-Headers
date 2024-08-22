// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSPREYPREFERENCES_H
#define OSPREYPREFERENCES_H


#import <Foundation/Foundation.h>

#import "OspreyKeychain.h"

@interface OspreyPreferences : NSObject {
    OspreyKeychain *_keychain;
}




-(id)connectionPreferencesForHost:(id)arg0 ;
-(id)connections;
-(id)initWithKeychain:(id)arg0 ;
-(void)deleteConnectionPreferencesForHost:(id)arg0 ;
-(void)setConnectionPreferences:(id)arg0 ;
-(void)synchronize;


@end


#endif