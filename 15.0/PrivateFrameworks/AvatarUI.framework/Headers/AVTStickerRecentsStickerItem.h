// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSTICKERRECENTSSTICKERITEM_H
#define AVTSTICKERRECENTSSTICKERITEM_H

@class NSString, UIImage, NSURL;
@protocol AVTStickerRecentsItem;

#import <Foundation/Foundation.h>


@interface AVTStickerRecentsStickerItem : NSObject <AVTStickerRecentsItem>



@property (readonly, copy, nonatomic) NSString *avatarIdentifier; // ivar: _avatarIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *discardableContentHandler; // ivar: discardableContentHandler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (nonatomic, getter=isPrereleaseSticker) BOOL prereleaseSticker; // ivar: _prereleaseSticker
@property (readonly, copy, nonatomic) id *provider; // ivar: _provider
@property (readonly, copy, nonatomic) NSString *stickerName; // ivar: _stickerName
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)cellIdentifier;
-(id)initWithAvatarIdentifier:(id)arg0 stickerName:(id)arg1 localizedName:(id)arg2 stickerProvider:(id)arg3 ;
-(void)discardContent;


@end


#endif