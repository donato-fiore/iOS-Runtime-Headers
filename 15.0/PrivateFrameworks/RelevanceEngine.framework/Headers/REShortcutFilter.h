// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RESHORTCUTFILTER_H
#define RESHORTCUTFILTER_H


#import <Foundation/Foundation.h>


@interface REShortcutFilter : NSObject



+(NSUInteger)filterVersion;
-(NSUInteger)_actionIdentifierForIntent:(id)arg0 ;
-(NSUInteger)_actionIdentifierForUserActivity:(id)arg0 ;
-(id)identifierForIntent:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)identifierForUserActivity:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)init;
-(id)intentByFilteringIntent:(id)arg0 withLevel:(NSUInteger)arg1 ;
-(id)userActivityByFilteringUserActivity:(id)arg0 withLevel:(NSUInteger)arg1 ;


@end


#endif