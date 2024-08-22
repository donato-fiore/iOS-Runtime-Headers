// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCACHEFLUSHINGMANAGER_H
#define TSCACHEFLUSHINGMANAGER_H

@protocol TSCacheFlushingManagerType;

#import <Foundation/Foundation.h>


@interface TSCacheFlushingManager : NSObject <TSCacheFlushingManagerType>

 {
    ? cacheFlusher;
    ? storageLevelProvider;
    ? preFlushGroup;
}




-(id)createPreFlushTask;
-(id)init;
-(void)addPreFlushTask:(id)arg0 ;
-(void)enableFlushing;


@end


#endif