// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKLOCATIONATTACHMENTITEM_H
#define CKLOCATIONATTACHMENTITEM_H

@class NSString;


#import "CKAttachmentItem.h"

@interface CKLocationAttachmentItem : CKAttachmentItem

@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (copy, nonatomic) NSString *locationTitle; // ivar: _locationTitle


+(id)UTITypes;
-(BOOL)isDroppedPin;
-(id)_generateThumbnailFillToSize:(struct CGSize )arg0 ;
-(id)initWithFileURL:(id)arg0 size:(struct CGSize )arg1 transferGUID:(id)arg2 guid:(id)arg3 createdDate:(id)arg4 ;
-(id)vCardURLProperties;
-(void)generatePreviewWithCompletion:(id)arg0 ;


@end


#endif