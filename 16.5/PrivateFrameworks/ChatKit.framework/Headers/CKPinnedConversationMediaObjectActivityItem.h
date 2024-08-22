// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPINNEDCONVERSATIONMEDIAOBJECTACTIVITYITEM_H
#define CKPINNEDCONVERSATIONMEDIAOBJECTACTIVITYITEM_H

@class NSString, IMMessage;
@protocol CKPinnedConversationActivityItem;

#import <Foundation/Foundation.h>

#import "CKMediaObject.h"

@interface CKPinnedConversationMediaObjectActivityItem : NSObject <CKPinnedConversationActivityItem>



@property (readonly, nonatomic) BOOL activityItemAppearsWithAnimation;
@property (readonly, nonatomic) CGFloat activityItemContentScale; // ivar: _activityItemContentScale
@property (readonly, nonatomic) BOOL activityItemDisappearsWithAnimation;
@property (readonly, nonatomic) NSString *activityItemIdentifier;
@property (readonly, nonatomic) NSString *attachedContactItemIdentifier; // ivar: _attachedContactItemIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKMediaObject *mediaObject; // ivar: _mediaObject
@property (readonly, nonatomic) IMMessage *message; // ivar: _message
@property (readonly) Class superclass;


+(BOOL)_mediaTypeSupportedForPinningPreview:(int)arg0 ;
+(id)previewImageForMediaObject:(id)arg0 ;
+(id)previewableMediaObjectFromMessage:(id)arg0 ;
-(id)activityItemView;
-(id)initWithMessage:(id)arg0 mediaObject:(id)arg1 contentScale:(CGFloat)arg2 attachedContactItemIdentifier:(id)arg3 ;


@end


#endif