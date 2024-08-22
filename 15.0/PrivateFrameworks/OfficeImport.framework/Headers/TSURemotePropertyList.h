// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUREMOTEPROPERTYLIST_H
#define TSUREMOTEPROPERTYLIST_H

@class NSURL, NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface TSURemotePropertyList : NSObject {
    NSURL *_remoteURL;
    NSURL *_localURL;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_propertyList;
    NSObject<OS_dispatch_queue> *_checkQueue;
    NSObject<OS_dispatch_source> *_updateTimer;
    BOOL _didUpdateAtLeastOnce;
}




-(CGFloat)timeIntervalUntilNextUpdate;
-(id)URLForKey:(id)arg0 ;
-(id)URLRequest;
-(id)arrayForKey:(id)arg0 ;
-(id)deserializePropertyListData:(id)arg0 error:(*id)arg1 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)init;
-(id)initWithRemoteURL:(id)arg0 localURL:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(id)validateUserDefaultsDownloadURL:(id)arg0 ;
-(void)checkForUpdateWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)processDidResume:(id)arg0 ;
-(void)processPropertyList:(id)arg0 ;
-(void)processResponse:(id)arg0 data:(id)arg1 error:(id)arg2 ;
-(void)processWillSuspend:(id)arg0 ;
-(void)startUpdateTimer;
-(void)updateIfNeededWithCompletionHandler:(id)arg0 ;


@end


#endif