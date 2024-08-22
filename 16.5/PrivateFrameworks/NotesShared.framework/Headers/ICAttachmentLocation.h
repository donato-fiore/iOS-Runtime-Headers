// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTLOCATION_H
#define ICATTACHMENTLOCATION_H

@class NSString;
@protocol ICSearchIndexableTarget, ICSearchIndexable;


#import "ICLocation.h"
#import "ICAttachment.h"

@interface ICAttachmentLocation : ICLocation <ICSearchIndexableTarget>



@property (retain, nonatomic) ICAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *formattedAddressWithoutAttachmentTitle;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL placeUpdated;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<ICSearchIndexable> *targetSearchIndexable;


+(id)newAttachmentLocationForAttachment:(id)arg0 ;


@end


#endif