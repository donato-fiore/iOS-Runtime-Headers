// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDAILYROUTINESHORTCUT_H
#define WFDAILYROUTINESHORTCUT_H

@class NSArray, WFImage, NSString;

#import <Foundation/Foundation.h>

#import "WFDailyRoutineShortcutSetupFlow.h"

@interface WFDailyRoutineShortcut : NSObject

@property (readonly, copy, nonatomic) NSArray *actionIcons; // ivar: _actionIcons
@property (readonly, copy, nonatomic) WFImage *bannerImage; // ivar: _bannerImage
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupFlow *setupFlow; // ivar: _setupFlow
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 bannerImage:(id)arg2 actionIcons:(id)arg3 setupFlow:(id)arg4 ;


@end


#endif