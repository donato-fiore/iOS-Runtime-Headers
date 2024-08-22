// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMEDIAOBJECTMANAGER_H
#define CKMEDIAOBJECTMANAGER_H

@class NSDictionary, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CKMediaObjectManager : NSObject

@property (copy, nonatomic) NSDictionary *UTITypes; // ivar: _UTITypes
@property (copy, nonatomic) NSArray *classes; // ivar: _classes
@property (copy, nonatomic) NSDictionary *dynTypes; // ivar: _dynTypes
@property (retain, nonatomic) NSMutableDictionary *transfers; // ivar: _transfers


+(id)sharedInstance;
-(Class)classForFilename:(id)arg0 ;
-(Class)classForUTIType:(id)arg0 ;
-(Class)transferClass;
-(id)UTITypeForExtension:(id)arg0 ;
-(id)UTITypeForFilename:(id)arg0 ;
-(id)fileManager;
-(id)init;
-(id)mediaObjectWithData:(id)arg0 UTIType:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 ;
-(id)mediaObjectWithFileURL:(id)arg0 filename:(id)arg1 transcoderUserInfo:(id)arg2 ;
-(id)mediaObjectWithFileURL:(id)arg0 filename:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(BOOL)arg4 ;
-(id)mediaObjectWithFileURL:(id)arg0 filename:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(BOOL)arg4 isScreenshot:(BOOL)arg5 ;
-(id)mediaObjectWithSticker:(id)arg0 stickerUserInfo:(id)arg1 ;
-(id)mediaObjectWithTransferGUID:(id)arg0 imMessage:(id)arg1 ;
-(id)mediaObjectWithTransferGUID:(id)arg0 imMessage:(id)arg1 chatContext:(id)arg2 ;
-(id)transferWithFileURL:(id)arg0 transcoderUserInfo:(id)arg1 attributionInfo:(id)arg2 hideAttachment:(BOOL)arg3 ;
-(id)transferWithFileURL:(id)arg0 transcoderUserInfo:(id)arg1 attributionInfo:(id)arg2 hideAttachment:(BOOL)arg3 isScreenshot:(BOOL)arg4 ;
-(id)transferWithStickerFileURL:(id)arg0 transferUserInfo:(id)arg1 attributionInfo:(id)arg2 ;
-(id)transferWithTransferGUID:(id)arg0 imMessage:(id)arg1 ;
-(void)dealloc;
-(void)transferRemoved:(id)arg0 ;


@end


#endif