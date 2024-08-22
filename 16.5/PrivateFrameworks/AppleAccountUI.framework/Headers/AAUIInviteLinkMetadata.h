// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIINVITELINKMETADATA_H
#define AAUIINVITELINKMETADATA_H

@class LPLinkMetadata, AAMessagesInviteContext, LPImage;

#import <Foundation/Foundation.h>


@interface AAUIInviteLinkMetadata : NSObject

@property (readonly, nonatomic) LPLinkMetadata *bubbleMetadata;
@property (readonly, nonatomic) AAMessagesInviteContext *context; // ivar: _context
@property (retain, nonatomic) LPImage *icon; // ivar: _icon
@property (retain, nonatomic) LPImage *image; // ivar: _image


-(id)initWithContext:(id)arg0 ;


@end


#endif