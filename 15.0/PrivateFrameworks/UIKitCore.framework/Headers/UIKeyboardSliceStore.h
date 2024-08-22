// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDSLICESTORE_H
#define UIKEYBOARDSLICESTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface UIKeyboardSliceStore : NSObject {
    NSMutableDictionary *_store;
}




+(id)sharedStore;
+(id)sliceSetForID:(id)arg0 ;
+(id)sliceSetIDForKeyplaneName:(id)arg0 type:(NSInteger)arg1 orientation:(NSInteger)arg2 ;
+(void)archiveSet:(id)arg0 ;
-(id)init;
-(id)sliceSetForID:(id)arg0 ;
-(void)addSet:(id)arg0 ;


@end


#endif