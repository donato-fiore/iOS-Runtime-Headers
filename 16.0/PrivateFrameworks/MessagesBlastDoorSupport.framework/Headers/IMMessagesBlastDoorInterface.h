// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMMESSAGESBLASTDOORINTERFACE_H
#define IMMESSAGESBLASTDOORINTERFACE_H


#import <Foundation/Foundation.h>

#import "IMMessagesBlastDoorInterfaceInternal.h"

@interface IMMessagesBlastDoorInterface : NSObject

@property (retain, nonatomic) IMMessagesBlastDoorInterfaceInternal *interface; // ivar: _interface


+(BOOL)supportsFeature:(id)arg0 ;
-(id)init;
-(void)decontaminateTopLevelDictionary:(id)arg0 resultHandler:(id)arg1 ;
-(void)defuseBalloonPluginPayload:(id)arg0 withIdentifier:(id)arg1 resultHandler:(id)arg2 ;
-(void)defuseCollaborationNoticeActionDictionary:(id)arg0 resultHandler:(id)arg1 ;
-(void)defuseCollaborationNoticePayload:(id)arg0 resultHandler:(id)arg1 ;
-(void)defuseData:(id)arg0 forPreviewType:(unsigned char)arg1 resultHandler:(id)arg2 ;
-(void)defuseNicknameDictionary:(id)arg0 withKey:(id)arg1 recordTag:(id)arg2 resultHandler:(id)arg3 ;
-(void)defuseSMSDictionary:(id)arg0 resultHandler:(id)arg1 ;
-(void)defuseTopLevelDictionary:(id)arg0 resultHandler:(id)arg1 ;
-(void)generateMetadataforAttachmentWithfileURL:(id)arg0 resultHandler:(id)arg1 ;
-(void)generateMoviePreviewForAttachmentWithFileURL:(id)arg0 maxPixelDimension:(float)arg1 minThumbnailPxSize:(struct CGSize )arg2 scale:(float)arg3 resultHandler:(id)arg4 ;
-(void)generatePreviewforAnimatedImageWithfileURL:(id)arg0 maxPixelDimension:(float)arg1 index:(NSInteger)arg2 maxCount:(NSInteger)arg3 resultHandler:(id)arg4 ;
-(void)generatePreviewforAttachmentWithfileURL:(id)arg0 maxPixelDimension:(float)arg1 scale:(float)arg2 resultHandler:(id)arg3 ;
-(void)generatePreviewforAttachmentWithfileURL:(id)arg0 resultHandler:(id)arg1 ;
-(void)generatePreviewforAudioMessageWithfileURL:(id)arg0 resultHandler:(id)arg1 ;
-(void)getMetadataforAnimatedImageWithfileURL:(id)arg0 maxCount:(NSInteger)arg1 resultHandler:(id)arg2 ;


@end


#endif