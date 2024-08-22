// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REREMOTETRAININGSERVER_H
#define REREMOTETRAININGSERVER_H

@class NSXPCConnection, NSString;
@protocol RERemoteTrainingServerInterface;

#import <Foundation/Foundation.h>


@interface RERemoteTrainingServer : NSObject <RERemoteTrainingServerInterface>

 {
    NSXPCConnection *_connection;
    NSString *_processName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTargetProcessName:(id)arg0 ;
-(void)_clearConnection;
-(void)_queue_setupConnectionIfNeeded;
-(void)performTrainingWithElements:(id)arg0 events:(id)arg1 interactions:(id)arg2 completion:(id)arg3 ;
-(void)updateRemoteAttribute:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;


@end


#endif