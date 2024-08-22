// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSETTINGSDEFAULTS_H
#define HPSETTINGSDEFAULTS_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface HPSettingsDefaults : NSObject

@property (retain, nonatomic) NSUserDefaults *HPSettingsUserDefaults; // ivar: _HPSettingsUserDefaults


-(id)init;
-(id)objectForDefault:(id)arg0 ;
-(void)setObject:(id)arg0 forDefault:(id)arg1 ;


@end


#endif