// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSSOUNDGENERATOR_H
#define _UIFOCUSSOUNDGENERATOR_H

@protocol _UIFocusSoundPlayer;

#import <Foundation/Foundation.h>


@interface _UIFocusSoundGenerator : NSObject

@property (readonly, nonatomic) NSObject<_UIFocusSoundPlayer> *focusSoundPlayer; // ivar: _focusSoundPlayer


+(id)defaultGenerator;
+(void)_uiktest_unregisterURLForIdentifier:(id)arg0 ;
+(void)registerURL:(id)arg0 forIdentifier:(id)arg1 ;
-(id)initWithFocusSoundPlayer:(id)arg0 ;
-(void)playSoundForFocusUpdateInContext:(id)arg0 ;


@end


#endif