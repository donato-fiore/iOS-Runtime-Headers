// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUREMOTEDEFAULTS_H
#define TSUREMOTEDEFAULTS_H



#import "TSURemotePropertyList.h"

@interface TSURemoteDefaults : TSURemotePropertyList



+(id)sharedDefaults;
-(id)initInternal;
-(id)initWithRemoteURL:(id)arg0 localURL:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(void)processPropertyList:(id)arg0 ;
-(void)registerDefaults;


@end


#endif