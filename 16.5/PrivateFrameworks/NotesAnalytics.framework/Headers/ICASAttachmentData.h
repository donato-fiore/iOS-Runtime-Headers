// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASATTACHMENTDATA_H
#define ICASATTACHMENTDATA_H

@class NSArray;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASAttachmentData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSArray *attachmentSummary; // ivar: _attachmentSummary


+(id)dataName;
-(id)initWithAttachmentSummary:(id)arg0 ;
-(id)toDict;


@end


#endif