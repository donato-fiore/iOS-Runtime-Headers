// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMUSERDEFAULTS_H
#define REMUSERDEFAULTS_H

@class NSMutableDictionary, NSString, NSUserDefaults;

#import <Foundation/Foundation.h>


@interface REMUserDefaults : NSObject

@property (readonly, nonatomic) NSMutableDictionary *observers; // ivar: _observers
@property (nonatomic) BOOL showRemindersAsOverdue_cached; // ivar: _showRemindersAsOverdue_cached
@property (readonly, nonatomic) NSString *suiteName; // ivar: _suiteName
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)appGroupUserDefaults;
+(id)daemonUserDefaults;
-(id)_addObserverForKey:(id)arg0 block:(id)arg1 ;
-(id)_startObservingValuesForKey:(id)arg0 block:(id)arg1 ;
-(id)_startStreamingValuesForKey:(id)arg0 block:(id)arg1 ;
-(id)initWithSuiteName:(id)arg0 containerURL:(id)arg1 ;
-(void)_removeObserver:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif