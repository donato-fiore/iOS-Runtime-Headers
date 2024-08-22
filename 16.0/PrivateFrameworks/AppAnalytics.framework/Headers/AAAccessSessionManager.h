// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAACCESSSESSIONMANAGER_H
#define AAACCESSSESSIONMANAGER_H


#import <Foundation/Foundation.h>


@interface AAAccessSessionManager : NSObject {
    ? accessSessionManager;
}


@property (nonatomic, readonly) BOOL isActive;


-(id)init;
-(void)pushSessionData:(id)arg0 ;
-(void)pushSessionData:(id)arg0 submitEventQueues:(BOOL)arg1 ;
-(void)pushSessionData:(id)arg0 traits:(id)arg1 ;
-(void)pushSessionData:(id)arg0 traits:(id)arg1 submitEventQueues:(BOOL)arg2 ;


@end


#endif