// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUEDITPLUGINACTIONACTIVITY_H
#define PUEDITPLUGINACTIONACTIVITY_H

@class NSString;


#import "PUEditPluginActivity.h"

@interface PUEditPluginActionActivity : PUEditPluginActivity

@property (readonly, copy, nonatomic) NSString *internalSystemImageName; // ivar: _internalSystemImageName


+(NSInteger)activityCategory;
-(id)_systemImageName;
-(id)initWithPlugin:(id)arg0 systemImageName:(id)arg1 ;


@end


#endif