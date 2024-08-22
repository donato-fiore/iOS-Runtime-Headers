// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSALTICONMANAGER_H
#define LSALTICONMANAGER_H


#import <Foundation/Foundation.h>


@interface LSAltIconManager : NSObject



+(id)sharedInstance;
-(BOOL)_setAlternateIconName:(id)arg0 forIdentifier:(id)arg1 withIconsDictionary:(id)arg2 error:(*id)arg3 ;
-(BOOL)isValidAlternateIcon:(id)arg0 forIconsDict:(id)arg1 ;
-(id)_getPreferredIconNameForIdentifier:(id)arg0 ;
-(id)alternateIconNameForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_setPreferredIconName:(id)arg0 forIdentifier:(id)arg1 ;
-(void)clearAlternateNameForBundleIdentifier:(id)arg0 validationDictionary:(id)arg1 ;
-(void)setAlternateIconName:(id)arg0 forIdentifier:(id)arg1 iconsDictionary:(id)arg2 reply:(id)arg3 ;


@end


#endif