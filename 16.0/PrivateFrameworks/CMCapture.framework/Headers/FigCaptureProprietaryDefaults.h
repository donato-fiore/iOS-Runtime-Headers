// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREPROPRIETARYDEFAULTS_H
#define FIGCAPTUREPROPRIETARYDEFAULTS_H

@class NSUserDefaults, NSMutableSet;

#import <Foundation/Foundation.h>


@interface FigCaptureProprietaryDefaults : NSObject {
    NSUserDefaults *_videoUserDefaults;
    NSUserDefaults *_audioUserDefaults;
    id *_defaultsChangedHandler;
    NSMutableSet *_observedKeys;
    os_unfair_lock_s _lock;
    BOOL _changingDefaultsMyself;
}




+(void)initialize;
-(id)initWithDefaultsChangedHandler:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;
-(void)observeChangesForKey:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)stopObservingChangesForKey:(id)arg0 ;


@end


#endif