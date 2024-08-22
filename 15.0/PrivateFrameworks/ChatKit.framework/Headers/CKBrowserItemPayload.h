// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKBROWSERITEMPAYLOAD_H
#define CKBROWSERITEMPAYLOAD_H

@class IMPluginPayload, NSDictionary, NSURL, NSString, UIViewController<CKPluginEntryViewController>;


#import "CKMediaObject.h"

@interface CKBrowserItemPayload : IMPluginPayload

@property (retain, nonatomic) NSDictionary *attributionInfo; // ivar: _attributionInfo
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (retain, nonatomic) NSString *filename; // ivar: _filename
@property (retain, nonatomic) CKMediaObject *mediaObject; // ivar: _mediaObject
@property (retain, nonatomic) UIViewController<CKPluginEntryViewController> *photoShelfViewController; // ivar: _photoShelfViewController
@property (nonatomic) BOOL requiresValidation; // ivar: _requiresValidation
@property (nonatomic) BOOL useDirectSend; // ivar: _useDirectSend
@property (retain, nonatomic) NSURL *videoComplementFileURL; // ivar: _videoComplementFileURL


+(BOOL)supportsSecureCoding;
+(id)browserItemFromSticker:(id)arg0 ;
+(id)browserItemPayloadFromIMPluginPayload:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPluginPayload:(id)arg0 ;
-(BOOL)shouldSendAsMediaObject;
-(BOOL)shouldSendAsRichLink;
-(BOOL)shouldSendAsText;
-(id)__ck_urlFromTextBodyForRichLink;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)transcoderUserInfo;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif