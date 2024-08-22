// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCHATEAGERUPLOADCONTROLLER_H
#define CKCHATEAGERUPLOADCONTROLLER_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CKChatEagerUploadController : NSObject

@property (retain, nonatomic) NSMutableDictionary *identifierMap; // ivar: _identifierMap
@property (retain, nonatomic) NSMutableDictionary *temporaryURLS; // ivar: _temporaryURLS
@property (retain, nonatomic) NSMutableArray *uploadUrls; // ivar: _uploadUrls


-(id)_newTransferForURL:(id)arg0 transcoderUserInfo:(id)arg1 attributionInfo:(id)arg2 ;
-(id)init;
-(void)_uploadFileURL:(id)arg0 filename:(id)arg1 transcoderUserInfo:(id)arg2 videoComplementURL:(id)arg3 attributionInfo:(id)arg4 identifier:(id)arg5 recipients:(id)arg6 ;
-(void)addURLToIdentifierMap:(id)arg0 forIdentifier:(id)arg1 ;
-(void)asyncCopyFileAtURL:(id)arg0 toDestinationURL:(id)arg1 completion:(id)arg2 ;
-(void)cancelAll;
-(void)cancelIdentifier:(id)arg0 ;
-(void)cancelURL:(id)arg0 ;
-(void)didSendComposition;
-(void)removeTemporaryURLForURL:(id)arg0 ;
-(void)uploadFileURL:(id)arg0 filename:(id)arg1 transcoderUserInfo:(id)arg2 videoComplementURL:(id)arg3 attributionInfo:(id)arg4 identifier:(id)arg5 recipients:(id)arg6 ;
-(void)uploadPayload:(id)arg0 identifier:(id)arg1 replace:(BOOL)arg2 recipients:(id)arg3 ;


@end


#endif