// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASATTACHMENTITEMTYPEDATA_H
#define ICASATTACHMENTITEMTYPEDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASAttachmentItemTypeData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *attachmentID; // ivar: _attachmentID
@property (readonly, nonatomic) NSString *attachmentUTI; // ivar: _attachmentUTI


+(id)dataName;
-(id)initWithAttachmentID:(id)arg0 attachmentUTI:(id)arg1 ;
-(id)toDict;


@end


#endif