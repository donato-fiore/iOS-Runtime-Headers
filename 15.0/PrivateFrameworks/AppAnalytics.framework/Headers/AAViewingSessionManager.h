// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAVIEWINGSESSIONMANAGER_H
#define AAVIEWINGSESSIONMANAGER_H

@protocol AAViewingSessionManagerType;

#import <Foundation/Foundation.h>


@interface AAViewingSessionManager : NSObject <AAViewingSessionManagerType>

 {
    ? sessions;
    ? activeSession;
}




-(id)init;
-(id)viewingSessionForContentIdentifier:(id)arg0 object:(id)arg1 onEnd:(id)arg2 ;
-(void)endActiveViewingSession;
-(void)endViewingSessionForContentIdentifier:(id)arg0 ;
-(void)removeObject:(id)arg0 forContentIdentifier:(id)arg1 ;


@end


#endif