// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCFPREFERENCESPRIMITIVEUSERDEFAULTS_H
#define CNCFPREFERENCESPRIMITIVEUSERDEFAULTS_H

@class NSString;
@protocol CNPrimitiveUserDefaults;

#import <Foundation/Foundation.h>


@interface CNCFPreferencesPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults>

 {
    NSString *_applicationID;
    NSInteger _autosyncTimerIsActive;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)primitiveBoolValueForKey:(id)arg0 keyExists:(*BOOL)arg1 ;
-(BOOL)synchronize;
-(NSInteger)primitiveIntegerValueForKey:(id)arg0 keyExists:(*BOOL)arg1 ;
-(id)initWithApplicationID:(id)arg0 ;
-(id)primitiveObjectForKey:(id)arg0 ;
-(struct __CFString *)CFApplicationID;
-(void)primitiveRemoveObjectForKey:(id)arg0 ;
-(void)setPrimitiveObject:(id)arg0 forKey:(id)arg1 ;
-(void)setupAutosync;


@end


#endif