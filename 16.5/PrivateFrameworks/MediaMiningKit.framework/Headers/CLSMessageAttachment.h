// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSMESSAGEATTACHMENT_H
#define CLSMESSAGEATTACHMENT_H

@class NSDictionary, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface CLSMessageAttachment : NSObject

@property (readonly, nonatomic) NSDictionary *attributionInfo; // ivar: _attributionInfo
@property (readonly, nonatomic) NSDate *createdDate;
@property (readonly, nonatomic) NSInteger createdDateValue; // ivar: _createdDateValue
@property (readonly, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly, nonatomic) BOOL hideAttachment; // ivar: _hideAttachment
@property (readonly, nonatomic) BOOL isOutgoing; // ivar: _isOutgoing
@property (readonly, nonatomic) BOOL isSticker; // ivar: _isSticker
@property (readonly, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (readonly, nonatomic) NSString *originalGUID; // ivar: _originalGUID
@property (readonly, nonatomic) NSInteger startDateValue; // ivar: _startDateValue
@property (readonly, nonatomic) NSDictionary *stickerUserInfo; // ivar: _stickerUserInfo
@property (readonly, nonatomic) NSInteger totalBytes; // ivar: _totalBytes
@property (readonly, nonatomic) NSString *transferName; // ivar: _transferName
@property (readonly, nonatomic) NSInteger transferState; // ivar: _transferState
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) NSString *utiType; // ivar: _utiType


-(id)debugDescription;
-(id)initWithAttachmentRecord:(struct _IMDAttachmentRecordStruct *)arg0 ;


@end


#endif