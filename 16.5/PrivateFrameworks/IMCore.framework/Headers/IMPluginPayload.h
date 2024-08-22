// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMPLUGINPAYLOAD_H
#define IMPLUGINPAYLOAD_H

@class NSString, NSArray, CKShare, _SWCollaborationMetadata, CKContainerSetupInfo, NSData, DDScannerResult, TUConversationActivity, NSURL, NSAttributedString, NSDate, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "IMBalloonPluginDataSource.h"

@interface IMPluginPayload : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *associatedMessageGUID; // ivar: _associatedMessageGUID
@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (retain, nonatomic) NSString *breadcrumbText; // ivar: _breadcrumbText
@property (retain, nonatomic) CKShare *cloudKitShare; // ivar: _cloudKitShare
@property (retain, nonatomic) _SWCollaborationMetadata *collaborationMetadata; // ivar: _collaborationMetadata
@property (retain, nonatomic) NSString *collaborationOptionsSummary; // ivar: _collaborationOptionsSummary
@property (retain, nonatomic) NSArray *consumedSessionPayloads; // ivar: _consumedSessionPayloads
@property (readonly, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) DDScannerResult *dataDetectedResult; // ivar: _dataDetectedResult
@property (weak, nonatomic) IMBalloonPluginDataSource *datasource; // ivar: _datasource
@property (copy, nonatomic) TUConversationActivity *groupActivity; // ivar: groupActivity
@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (nonatomic) BOOL isPlayed; // ivar: _isPlayed
@property (retain, nonatomic) NSString *messageGUID; // ivar: _messageGUID
@property (nonatomic) NSInteger payloadCollaborationType; // ivar: _payloadCollaborationType
@property (retain, nonatomic) NSString *pluginBundleID; // ivar: _pluginBundleID
@property (retain, nonatomic) NSString *pluginSessionGUID; // ivar: _pluginSessionGUID
@property (nonatomic) BOOL sendAsCopy; // ivar: _sendAsCopy
@property (retain, nonatomic) NSURL *sendAsCopyURL; // ivar: _sendAsCopyURL
@property (copy, nonatomic) NSString *sender; // ivar: _sender
@property (nonatomic) BOOL shouldExpire; // ivar: _shouldExpire
@property (readonly, nonatomic) BOOL shouldHideAttachments;
@property (nonatomic) BOOL skipConfigurePlugin; // ivar: _skipConfigurePlugin
@property (retain, nonatomic) NSString *statusText; // ivar: _statusText
@property (nonatomic, getter=isSticker) BOOL sticker; // ivar: _sticker
@property (readonly, nonatomic) BOOL supportsCollaboration;
@property (retain, nonatomic) NSAttributedString *text; // ivar: _text
@property (readonly, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (retain, nonatomic) NSDate *time; // ivar: _time
@property (nonatomic, getter=isUpdate) BOOL update; // ivar: _update
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPluginPayload:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 additionalAllowedClasses:(id)arg1 ;
-(id)initWithMessage:(id)arg0 ;
-(id)initWithMessageItem:(id)arg0 ;
-(id)initWithMessageItem:(id)arg0 chatContext:(id)arg1 ;
-(id)payloadDictionary;
-(void)addAttachmentsFromFilePaths:(id)arg0 ;
-(void)addAttachmentsFromFileTransferGUIDs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif