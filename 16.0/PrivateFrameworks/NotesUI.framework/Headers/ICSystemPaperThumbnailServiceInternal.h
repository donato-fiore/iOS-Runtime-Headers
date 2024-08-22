// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSYSTEMPAPERTHUMBNAILSERVICEINTERNAL_H
#define ICSYSTEMPAPERTHUMBNAILSERVICEINTERNAL_H


#import <Foundation/Foundation.h>

#import "ICThumbnailService.h"

@interface ICSystemPaperThumbnailServiceInternal : NSObject {
    ? fileManager;
    ? observations;
    ? $__lazy_storage_$_contextDidUpdateObject;
    ? $__lazy_storage_$_cacheDidInvalidateObject;
    ? $__lazy_storage_$_didUpdateSystemPaperNotes;
    ? $__lazy_storage_$_contextDidDeleteObject;
    ? $__lazy_storage_$_didDeleteSystemPaperNotes;
    ? $__lazy_storage_$_accessibilityAppearanceDidChange;
}


@property (nonatomic, readonly) ICThumbnailService *thumbnailService; // ivar: thumbnailService


+(id)sharedService;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateForNote:(id)arg0 ;
-(void)invalidateForNoteIDs:(id)arg0 ;
-(void)invalidateForNotes:(id)arg0 ;
-(void)observe;
-(void)updateIfNeededForNote:(id)arg0 completion:(id)arg1 ;
-(void)updateIfNeededForNoteIDs:(id)arg0 completion:(id)arg1 ;
-(void)updateIfNeededForNotes:(id)arg0 completion:(id)arg1 ;
-(void)updateIfNeededWithCompletion:(id)arg0 ;
-(void)updateRecentSystemPaperNote;


@end


#endif