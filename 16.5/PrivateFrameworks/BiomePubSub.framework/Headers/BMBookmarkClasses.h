// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMBOOKMARKCLASSES_H
#define BMBOOKMARKCLASSES_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface BMBookmarkClasses : NSObject {
    os_unfair_lock_s _lock;
    NSMutableSet *_allowed;
    BOOL _addedBMStoreBookmark;
}




+(id)sharedInstance;
-(id)allowedClassesForSecureCodingBMBookmark;
-(id)init;
-(void)allowClassesForSecureCodingBMBookmark:(id)arg0 ;


@end


#endif