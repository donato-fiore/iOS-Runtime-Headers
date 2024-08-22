// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REENGINEDEFAULTS_H
#define _REENGINEDEFAULTS_H

@class NSString, NSUserDefaults, NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _REEngineDefaults : NSObject {
    NSString *_domain;
    NSUserDefaults *_defaults;
    NSMutableSet *_registeredPaths;
    NSMutableDictionary *_registeredBlocks;
    NSObject<OS_dispatch_queue> *_registrationQueue;
}




+(id)defaultsForEngine:(id)arg0 ;
+(id)globalDefaults;
-(BOOL)_BOOLValueForKey:(id)arg0 set:(*BOOL)arg1 ;
-(NSInteger)_NSIntegerValueForKey:(id)arg0 set:(*BOOL)arg1 ;
-(id)_domainName;
-(id)_idValueForKey:(id)arg0 set:(*BOOL)arg1 ;
-(id)initWithDomain:(id)arg0 ;
// -(void)_registerCallback:(id)arg0 forKey:(unk)arg1  ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif