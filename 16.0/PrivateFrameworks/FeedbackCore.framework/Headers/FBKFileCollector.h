// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKFILECOLLECTOR_H
#define FBKFILECOLLECTOR_H

@class NSMutableSet, NSString, NSURL;
@protocol FBKAttachmentProvider, FBKFilerForm, FBKAttachmentListenerDelegate;

#import <Foundation/Foundation.h>

#import "FBKDECollector.h"

@interface FBKFileCollector : NSObject <FBKAttachmentProvider>



@property (retain) NSMutableSet *_attachments; // ivar: __attachments
@property (retain, nonatomic) FBKDECollector *deCollector; // ivar: _deCollector
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<FBKFilerForm> *filerForm; // ivar: _filerForm
@property (readonly) NSUInteger hash;
@property (weak) NSObject<FBKAttachmentListenerDelegate> *listener; // ivar: _listener
@property (retain) NSURL *submissionDir; // ivar: _submissionDir
@property (readonly) Class superclass;


+(id)diskAccessQueue;
+(void)findExistingFilesForFilerForm:(id)arg0 matcherPredicates:(id)arg1 completion:(id)arg2 ;
-(BOOL)hasFilePromises;
-(BOOL)hasUnmetRequirements;
-(id)_fileProcessingQueue;
-(id)attachDraftFiles:(id)arg0 withRequirements:(id)arg1 ;
-(id)attachLocalFiles:(id)arg0 withRequirements:(id)arg1 shouldCopyFiles:(BOOL)arg2 ;
-(id)attachURLSchemeFiles:(id)arg0 withRequirements:(id)arg1 ;
-(id)attachments;
-(id)currentDeviceIdentifier;
-(id)diagnosticExtensionAttachments;
-(id)diskAccessQueue;
-(id)existingAttachmentRegexMatchingFile:(id)arg0 ;
-(id)getUniqueFileNameForAttachmentType:(NSInteger)arg0 ;
-(id)identifier;
-(id)initWithFilerForm:(id)arg0 ;
-(id)newAttachmentWithType:(NSInteger)arg0 ;
-(id)platform;
-(id)requirements;
-(void)_addAttachment:(id)arg0 ;
-(void)_attachURL:(id)arg0 toAttachment:(id)arg1 ;
-(void)_removeAttachment:(id)arg0 ;
-(void)_updateAttachment:(id)arg0 withState:(NSInteger)arg1 ;
-(void)addAttachmentWithItemProvider:(id)arg0 ;
-(void)addFileFromItemProvider:(id)arg0 ;
-(void)addFileFromURL:(id)arg0 byMoving:(BOOL)arg1 ;
-(void)addImageWithItemProvider:(id)arg0 ;
-(void)addVideoFromItemProvider:(id)arg0 ;
-(void)cancelCollection:(id)arg0 ;
-(void)commitWithForm:(id)arg0 withCompletion:(id)arg1 ;
-(void)processFileFromURL:(id)arg0 movingFile:(BOOL)arg1 forAttachment:(id)arg2 ;
-(void)removeAllAttachments;
-(void)removeAttachment:(id)arg0 ;
-(void)reportAttachingErrorWithAttachment:(id)arg0 userFriendlyError:(id)arg1 ;
-(void)saveDraftsDirectory;
-(void)updateRequirements:(id)arg0 ;


@end


#endif