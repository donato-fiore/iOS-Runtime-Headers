// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOSFILEPROVIDERITEMPROVIDER_H
#define PUPHOTOSFILEPROVIDERITEMPROVIDER_H

@class NSItemProvider, NSMutableDictionary;



@interface PUPhotosFileProviderItemProvider : NSItemProvider

@property (nonatomic) BOOL _copyToTemporaryDirectoryBeforeCallingOpenInPlaceCompletionHandler; // ivar: __copyToTemporaryDirectoryBeforeCallingOpenInPlaceCompletionHandler
@property (retain, nonatomic) NSMutableDictionary *_progressByUUID; // ivar: __progressByUUID
@property (retain, nonatomic) NSMutableDictionary *_progressProxyByUUID; // ivar: __progressProxyByUUID
@property (retain, nonatomic) NSMutableDictionary *_progressSubscriberByUUID; // ivar: __progressSubscriberByUUID


-(id)_progressURLForTypeIdentifier:(id)arg0 ;
-(id)_startProgressForURL:(id)arg0 UUID:(id)arg1 cancellationHandler:(id)arg2 ;
-(id)loadDataRepresentationForTypeIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(id)loadFileRepresentationForTypeIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(id)loadInPlaceFileRepresentationForTypeIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(id)loadObjectOfClass:(Class)arg0 completionHandler:(id)arg1 ;
-(void)_completeProgressWithUUID:(id)arg0 success:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_startObservingProgressProxyIfNeeded:(id)arg0 UUID:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif