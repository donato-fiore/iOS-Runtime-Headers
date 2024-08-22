// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTUISTICKERITEM_H
#define AVTUISTICKERITEM_H

@class UIImage, MSSticker, NSString;
@protocol AVTDiscardableContent;

#import <Foundation/Foundation.h>


@interface AVTUIStickerItem : NSObject <AVTDiscardableContent>



@property (retain, nonatomic) UIImage *cachedImage; // ivar: _cachedImage
@property (retain, nonatomic) MSSticker *cachedMSSticker; // ivar: _cachedMSSticker
@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *discardableContentHandler; // ivar: discardableContentHandler
@property (nonatomic) BOOL hasBeenRendered; // ivar: _hasBeenRendered
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, copy, nonatomic) id *resourceProvider; // ivar: _resourceProvider
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 localizedName:(id)arg1 resourceProvider:(id)arg2 ;
-(void)clearCachedItems;
-(void)discardContent;


@end


#endif