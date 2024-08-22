// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMAVDAEMONLISTENER_H
#define IMAVDAEMONLISTENER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface IMAVDaemonListener : NSObject {
    NSMutableArray *_handlers;
    BOOL _postedSetupComplete;
}


@property (readonly, nonatomic) BOOL isSetupComplete; // ivar: _setupComplete


-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_noteDisconnected;
-(void)addHandler:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)removeHandler:(id)arg0 ;
-(void)setupComplete:(BOOL)arg0 info:(id)arg1 ;


@end


#endif