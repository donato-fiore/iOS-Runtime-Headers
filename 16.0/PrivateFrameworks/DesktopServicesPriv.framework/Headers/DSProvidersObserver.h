// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSPROVIDERSOBSERVER_H
#define DSPROVIDERSOBSERVER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface DSProvidersObserver : NSObject {
    TNodePtr fParentNode;
    NSObject *_token;
    NSArray *_providers;
    mutex _mutex;
    TConditionVariable _cv;
    BOOL populated;
}




-(BOOL)populated;
-(id)providers;
-(void)blockUntilPopulated;
-(void)collectionSynched;
-(void)setProviders:(id)arg0 ;
-(void)startObserving;
-(void)stopObserving;


@end


#endif