// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCPLFACEREBUILDSUPPORT_H
#define PLCPLFACEREBUILDSUPPORT_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>

#import "PLManagedAsset.h"
#import "PLFaceRebuildHelper.h"

@interface PLCPLFaceRebuildSupport : NSObject {
    PLManagedAsset *_asset;
    NSManagedObjectContext *_context;
    PLFaceRebuildHelper *_rebuildHelper;
    int _detectedFaceCount;
    int _rejectedFaceCount;
    int _hiddenFaceCount;
}




+(void)rebuildDeferredFacesForAsset:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)fetchDeferredFacesToRebuild;
-(id)fetchPersonForDeferredFace:(id)arg0 ;
-(id)initWithAsset:(id)arg0 managedObjectContext:(id)arg1 ;
-(void)rebuildAllFaces;
-(void)rebuildDetectedFace:(id)arg0 ;
-(void)rebuildFace:(id)arg0 ;
-(void)rebuildHiddenFace:(id)arg0 ;
-(void)rebuildRejectedFace:(id)arg0 ;


@end


#endif