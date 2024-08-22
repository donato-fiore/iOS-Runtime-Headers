// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKATTACHMENTMANAGER_H
#define FBKATTACHMENTMANAGER_H

@class NSArray, NSString;
@protocol FBKAttachmentListenerDelegate, FBKAttachmentManagerDelegate;

#import <Foundation/Foundation.h>

#import "FBKDECollector.h"
#import "FBKFileCollector.h"
#import "FBKGroupedDevice.h"

@interface FBKAttachmentManager : NSObject <FBKAttachmentListenerDelegate>



@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (retain, nonatomic) FBKDECollector *deCollector; // ivar: _deCollector
@property (weak, nonatomic) NSObject<FBKAttachmentManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic, readonly) NSString *description;
@property (retain, nonatomic) FBKFileCollector *fileCollector; // ivar: _fileCollector
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) FBKGroupedDevice *targetDevice; // ivar: _targetDevice


-(BOOL)canCancelAttachmentCollection:(id)arg0 ;
-(BOOL)canDeleteAttachment:(id)arg0 ;
-(BOOL)hasFilePromises;
-(BOOL)hasUnmetRequirementAttachments;
-(BOOL)isAttachmentParent:(id)arg0 ;
-(NSInteger)attachmentIndex:(id)arg0 ;
-(id)attachmentForIndexPath:(id)arg0 ;
-(id)initWithMatcherPredicates:(id)arg0 pendingFileUrls:(id)arg1 pendingExtensions:(id)arg2 form:(id)arg3 targetDevice:(id)arg4 shouldGetSessionStatus:(BOOL)arg5 shouldCheckDeferredLogs:(BOOL)arg6 ;
-(void)abortAllSessions;
-(void)addAttachmentWithItemProvider:(id)arg0 ;
-(void)addFileFrom:(id)arg0 byMoving:(BOOL)arg1 ;
-(void)attachmentProvider:(id)arg0 didAddAttachment:(id)arg1 ;
-(void)attachmentProvider:(id)arg0 didFinishAttaching:(id)arg1 error:(id)arg2 ;
-(void)attachmentProvider:(id)arg0 didFinishLoadingWithAttachments:(id)arg1 error:(id)arg2 ;
-(void)attachmentProvider:(id)arg0 didRemoveAttachment:(id)arg1 ;
-(void)attachmentProvider:(id)arg0 didStartAttaching:(id)arg1 ;
-(void)attachmentProvider:(id)arg0 didTakeAttachment:(id)arg1 fromOtherProvider:(id)arg2 ;
-(void)attachmentProvider:(id)arg0 didUpdateAttachment:(id)arg1 ;
-(void)gatherAttachment:(id)arg0 answers:(id)arg1 ;
-(void)gatherFilesWithDedExtension:(id)arg0 answers:(id)arg1 ;
-(void)postLaunchAttachLocalFiles:(id)arg0 allRequirements:(id)arg1 ;
-(void)removeAllAttachments;
-(void)updateRequirements:(id)arg0 ;


@end


#endif