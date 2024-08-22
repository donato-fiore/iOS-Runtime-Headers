// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSCENECLIENTPROVIDERINVALIDATIONACTION_H
#define FBSCENECLIENTPROVIDERINVALIDATIONACTION_H

@class BSAtomicSignal, BSAction;

#import <Foundation/Foundation.h>


@interface FBSceneClientProviderInvalidationAction : NSObject {
    BSAtomicSignal *_invalidated;
    BSAction *_action;
}




-(id)initWithHandler:(id)arg0 ;
-(void)invalidate;


@end


#endif