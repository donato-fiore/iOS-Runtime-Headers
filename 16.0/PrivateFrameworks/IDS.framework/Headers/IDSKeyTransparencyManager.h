// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSKEYTRANSPARENCYMANAGER_H
#define IDSKEYTRANSPARENCYMANAGER_H


#import <Foundation/Foundation.h>


@interface IDSKeyTransparencyManager : NSObject



-(void)getKeyTransparencyOptInEligiblityForApplication:(id)arg0 withCompletion:(id)arg1 ;
-(void)sendOptInUpdateForApplications:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif