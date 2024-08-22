// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDRADARUPLOADITEM_H
#define DEDRADARUPLOADITEM_H

@class NSString, NSURL;


#import "DEDAttachmentItem.h"

@interface DEDRadarUploadItem : DEDAttachmentItem

@property (nonatomic) BOOL isUploaded; // ivar: _isUploaded
@property (retain, nonatomic) NSString *radarAttachmentName; // ivar: _radarAttachmentName
@property (retain, nonatomic) NSURL *radarURL; // ivar: _radarURL
@property (nonatomic) NSUInteger taskIdentifier; // ivar: _taskIdentifier
@property (nonatomic) NSInteger totalBytesExpectedToSend; // ivar: _totalBytesExpectedToSend
@property (nonatomic) NSInteger totalBytesSent; // ivar: _totalBytesSent


-(id)description;
-(id)initWithUploadTask:(id)arg0 andAttachment:(id)arg1 ;


@end


#endif