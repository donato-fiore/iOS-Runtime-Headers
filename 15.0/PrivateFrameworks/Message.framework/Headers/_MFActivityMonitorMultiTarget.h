// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFACTIVITYMONITORMULTITARGET_H
#define _MFACTIVITYMONITORMULTITARGET_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface _MFActivityMonitorMultiTarget : NSObject {
    id *_primaryTarget;
    NSMutableSet *_allTargets;
}




-(BOOL)addActivityTarget:(id)arg0 ;
-(BOOL)removeActivityTarget:(id)arg0 ;
-(id)allTargets;
-(id)displayName;
-(id)primaryTarget;
-(void)setPrimaryTarget:(id)arg0 ;


@end


#endif