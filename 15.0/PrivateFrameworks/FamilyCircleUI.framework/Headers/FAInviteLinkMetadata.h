// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAINVITELINKMETADATA_H
#define FAINVITELINKMETADATA_H

@class LPLinkMetadata, FAInviteContext, LPImage;

#import <Foundation/Foundation.h>


@interface FAInviteLinkMetadata : NSObject

@property (readonly, nonatomic) LPLinkMetadata *bubbleMetadata;
@property (retain, nonatomic) FAInviteContext *context; // ivar: _context
@property (retain, nonatomic) LPImage *icon; // ivar: _icon
@property (retain, nonatomic) LPImage *image; // ivar: _image
@property (readonly, nonatomic) LPLinkMetadata *mailMetadata;




@end


#endif