// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCREMOTEDEFAULTS_H
#define FCREMOTEDEFAULTS_H

@protocol FCBackgroundTaskable;

#import <Foundation/Foundation.h>

#import "FCThreadSafeMutableDictionary.h"

@interface FCRemoteDefaults : NSObject

@property (readonly, weak, nonatomic) NSObject<FCBackgroundTaskable> *backgroundTaskable; // ivar: _backgroundTaskable
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *remoteDefaults; // ivar: _remoteDefaults


-(BOOL)isAvailable;
-(id)URLForKey:(id)arg0 ;
-(id)URLRequest;
-(id)dictionaryForKey:(id)arg0 ;
-(id)init;
-(id)initWithBackgroundTaskable:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)checkForUpdate;
-(void)processResponse:(id)arg0 data:(id)arg1 error:(id)arg2 ;
-(void)updateRemoteDefaults;


@end


#endif