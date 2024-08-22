// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PFGARBAGEMANAGER_H
#define _PFGARBAGEMANAGER_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface _PFGarbageManager : NSObject {
    NSMutableDictionary *_storeLinksDirs;
    NSMutableSet *_filesToCleanUp;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)defaultInstance;
+(void)initialize;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)retain;
-(void)release;


@end


#endif