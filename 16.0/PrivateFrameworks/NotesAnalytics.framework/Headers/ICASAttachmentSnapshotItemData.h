// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASATTACHMENTSNAPSHOTITEMDATA_H
#define ICASATTACHMENTSNAPSHOTITEMDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASAttachmentSnapshotItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *attachmentID; // ivar: _attachmentID
@property (readonly, nonatomic) NSString *attachmentTypeUTI; // ivar: _attachmentTypeUTI


+(id)dataName;
-(id)initWithAttachmentID:(id)arg0 attachmentTypeUTI:(id)arg1 ;
-(id)toDict;


@end


#endif