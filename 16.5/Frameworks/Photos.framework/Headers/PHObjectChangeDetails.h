// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHOBJECTCHANGEDETAILS_H
#define PHOBJECTCHANGEDETAILS_H


#import <Foundation/Foundation.h>

#import "PHObject.h"

@interface PHObjectChangeDetails : NSObject {
    PHObject *_objectBeforeChanges;
    PHObject *_objectAfterChanges;
    BOOL _assetContentChanged;
    BOOL _assetCollectionTitlePropertiesChanged;
    os_unfair_lock_s _stateLock;
}


@property (readonly, nonatomic) BOOL assetCollectionTitlePropertiesChanged;
@property (readonly) BOOL assetContentChanged;
@property (readonly) PHObject *objectAfterChanges;
@property (readonly) PHObject *objectBeforeChanges;
@property (readonly) BOOL objectWasDeleted;


-(id)description;
-(id)initWithPHObject:(id)arg0 ;
-(void)_calculateDiffs;


@end


#endif