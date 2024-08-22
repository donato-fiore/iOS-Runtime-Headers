// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIKEYBOARDENABLEMENTMANAGER_H
#define SBUIKEYBOARDENABLEMENTMANAGER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface SBUIKeyboardEnablementManager : NSObject {
    NSHashTable *_disabledContexts;
    BOOL _disabled;
}




+(id)sharedInstance;
-(id)description;
-(id)init;
-(void)disableAutomaticAppearanceForContext:(id)arg0 ;
-(void)enableAutomaticAppearanceForContext:(id)arg0 ;


@end


#endif