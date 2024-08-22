// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CLFSETTINGSOBSERVER_H
#define _CLFSETTINGSOBSERVER_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "CLFBaseSettings.h"

@interface _CLFSettingsObserver : NSObject <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) CLFBaseSettings *settings; // ivar: _settings
@property (nonatomic) SEL settingsSelector; // ivar: _settingsSelector
@property (readonly) Class superclass;


-(id)initWithSettings:(id)arg0 settingsSelector:(SEL)arg1 ;
-(void)invalidate;


@end


#endif