// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDUICLIENT_H
#define UIKEYBOARDUICLIENT_H

@class BSServiceConnection<BSServiceConnectionClient>;
@protocol UIKeyboardUIServiceProtocol;

#import <Foundation/Foundation.h>


@interface UIKeyboardUIClient : NSObject {
    BSServiceConnection<BSServiceConnectionClient> *_connection;
    id<UIKeyboardUIServiceProtocol> *_remoteTarget;
}




+(id)serviceInterface;
+(id)sharedInstance;
-(id)init;
-(id)snapshotViewForOptions:(NSUInteger)arg0 ;
-(void)_initConnectionIfNeeded;
-(void)dealloc;
-(void)setKeyboardAlpha:(CGFloat)arg0 ;


@end


#endif