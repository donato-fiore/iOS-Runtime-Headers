// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYSWITCHBOARD_H
#define PFUBIQUITYSWITCHBOARD_H

@class NSMutableDictionary, NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface PFUbiquitySwitchboard : NSObject {
    NSMutableDictionary *_storeNameToLocalPeerIDToEntry;
    NSMutableDictionary *_rootLocationToLocalPeerIDToFilePresenters;
    NSMutableDictionary *_rootLocationToLocalPeerIDToPreviousEntries;
    NSRecursiveLock *_registrationLock;
}




+(void)initialize;
-(id)description;
-(id)init;
-(void)coordinatorWillRemoveStore:(id)arg0 ;
-(void)dealloc;


@end


#endif