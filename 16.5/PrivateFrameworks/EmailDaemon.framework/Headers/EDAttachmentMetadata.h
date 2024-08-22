// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDATTACHMENTMETADATA_H
#define EDATTACHMENTMETADATA_H

@class NSString, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface EDAttachmentMetadata : NSObject

@property (readonly, nonatomic) NSString *attachmentHash; // ivar: _attachmentHash
@property (retain, nonatomic) NSNumber *attachmentID; // ivar: _attachmentID
@property (readonly, nonatomic) NSDate *downloadDate; // ivar: _downloadDate
@property (readonly, nonatomic) NSDate *lastViewed; // ivar: _lastViewed
@property (readonly, nonatomic) NSString *nameOnDisk; // ivar: _nameOnDisk
@property (readonly, nonatomic) NSNumber *size; // ivar: _size
@property (readonly, nonatomic) NSNumber *viewCount; // ivar: _viewCount
@property (readonly, nonatomic) NSNumber *viewCountByTapped; // ivar: _viewCountByTapped


-(id)description;
-(id)initWithAttachmentHash:(id)arg0 nameOnDisk:(id)arg1 size:(id)arg2 downloadDate:(id)arg3 ;
-(id)initWithAttachmentID:(id)arg0 attachmentHash:(id)arg1 nameOnDisk:(id)arg2 size:(id)arg3 downloadDate:(id)arg4 viewCount:(id)arg5 lastViewed:(id)arg6 viewCountByTapped:(id)arg7 ;
-(id)initWithAttachmentID:(id)arg0 nameOnDisk:(id)arg1 ;


@end


#endif