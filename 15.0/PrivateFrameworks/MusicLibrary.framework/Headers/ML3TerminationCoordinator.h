// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3TERMINATIONCOORDINATOR_H
#define ML3TERMINATIONCOORDINATOR_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ML3TerminationCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_signatures;
    int _notifyToken;
}


@property (readonly, nonatomic) BOOL isSigned;


+(id)sharedCoordinator;
-(BOOL)isSignedForReason:(NSInteger)arg0 ;
-(id)init;
-(void)_performTermination;
-(void)dealloc;
-(void)execute;
-(void)secedeForReason:(NSInteger)arg0 ;
-(void)signForReason:(NSInteger)arg0 ;


@end


#endif