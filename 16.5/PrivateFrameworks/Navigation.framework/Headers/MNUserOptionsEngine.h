// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNUSEROPTIONSENGINE_H
#define MNUSEROPTIONSENGINE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MNObserverHashTable.h"
#import "MNUserOptions.h"

@interface MNUserOptionsEngine : NSObject {
    MNObserverHashTable *_observers;
    NSString *_navSessionLanguage;
}


@property (readonly, nonatomic) NSString *currentVoiceLanguage;
@property (readonly, nonatomic) MNUserOptions *options; // ivar: _options


+(id)sharedInstance;
-(id)init;
-(id)localizedStringForKey:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)update:(id)arg0 ;
-(void)updateNavigationSessionLanguage:(id)arg0 ;


@end


#endif