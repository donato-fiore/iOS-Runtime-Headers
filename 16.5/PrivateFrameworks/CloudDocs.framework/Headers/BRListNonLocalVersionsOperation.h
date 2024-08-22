// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRLISTNONLOCALVERSIONSOPERATION_H
#define BRLISTNONLOCALVERSIONSOPERATION_H

@class NSOperation, NSURL, NSMutableDictionary, GSPermanentStorage, NSString, NSError, NSMutableArray;
@protocol BRNonLocalVersionReceiving, BRNonLocalVersionSending;



@interface BRListNonLocalVersionsOperation : NSOperation <BRNonLocalVersionReceiving>

 {
    NSURL *_documentURL;
    NSMutableDictionary *_versionsByEtag;
    GSPermanentStorage *_versionsStore;
    id<BRNonLocalVersionSending> *_sender;
    char _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isExecuting) BOOL executing; // ivar: _executing
@property (copy, nonatomic) id *fetchingVersionsDoneBlock; // ivar: _fetchingVersionsDoneBlock
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeCachedVersions; // ivar: _includeCachedVersions
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *versions; // ivar: _versions


-(BOOL)__advanceToState:(char)arg0 result:(id)arg1 error:(id)arg2 ;
-(BOOL)__finishIfCancelled;
-(BOOL)_advanceToState:(char)arg0 result:(id)arg1 error:(id)arg2 ;
-(BOOL)_setVersionStoreForDocumentAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)isConcurrent;
-(id)initWithDocumentURL:(id)arg0 ;
-(void)_addVersion:(id)arg0 ;
-(void)_senderInvalidate;
-(void)cancel;
-(void)dealloc;
-(void)newCachedVersionAtURL:(id)arg0 size:(id)arg1 etag:(id)arg2 hasThumbnail:(BOOL)arg3 displayName:(id)arg4 lastEditorDeviceName:(id)arg5 lastEditorNameComponents:(id)arg6 modificationDate:(id)arg7 ;
-(void)newFaultVersionAtURL:(id)arg0 faultURL:(id)arg1 faultExtension:(id)arg2 etag:(id)arg3 hasThumbnail:(BOOL)arg4 displayName:(id)arg5 lastEditorDeviceName:(id)arg6 lastEditorNameComponents:(id)arg7 modificationDate:(id)arg8 ;
-(void)newThumbnailForVersionWithEtag:(id)arg0 ;
-(void)start;


@end


#endif