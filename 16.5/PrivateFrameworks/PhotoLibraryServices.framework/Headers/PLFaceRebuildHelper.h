// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLFACEREBUILDHELPER_H
#define PLFACEREBUILDHELPER_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface PLFaceRebuildHelper : NSObject {
    NSManagedObjectContext *_context;
}




-(id)findExistingDetectedFaceForRebuildFace:(id)arg0 onAsset:(id)arg1 ;
-(id)findOrInsertDetectedFaceForRebuildFace:(id)arg0 onAsset:(id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)insertDetectedFaceForRebuildFace:(id)arg0 onAsset:(id)arg1 ;
-(void)_insertDetectionTraitsForRebuildTrait:(id)arg0 onDetection:(id)arg1 ;
-(void)rebuildDetectedFace:(id)arg0 onAsset:(id)arg1 person:(id)arg2 ;
-(void)rebuildHiddenFace:(id)arg0 onAsset:(id)arg1 ;
-(void)rebuildRejectedFace:(id)arg0 onAsset:(id)arg1 person:(id)arg2 ;


@end


#endif