// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKLOCATIONSHAREOFFERCHATITEM_H
#define CKLOCATIONSHAREOFFERCHATITEM_H

@class FMFLocation, NSString, IMHandle;


#import "CKBalloonChatItem.h"

@interface CKLocationShareOfferChatItem : CKBalloonChatItem

@property (retain, nonatomic) FMFLocation *lastKnownLocation; // ivar: _lastKnownLocation
@property (readonly, weak, nonatomic) NSString *locationText;
@property (readonly, nonatomic) NSInteger offerState;
@property (readonly, weak, nonatomic) IMHandle *sender;
@property (readonly, weak, nonatomic) NSString *titleText;


+(id)placeholderPreviewCache;
+(id)titleBarMaskImageForWidth:(CGFloat)arg0 ;
-(BOOL)failed;
-(BOOL)isFromMe;
-(BOOL)shouldUpdatePreviewWithLocation:(id)arg0 lastKnownLocation:(id)arg1 previewURL:(id)arg2 ;
-(Class)balloonViewClass;
-(id)_desaturatedImageForImage:(id)arg0 ;
-(id)_generatePlaceholderThumbnailFillToSize:(struct CGSize )arg0 ;
-(id)_generateThumbnailFillToSize:(struct CGSize )arg0 contentAlignmentInsets:(struct UIEdgeInsets )arg1 withCoordinate:(struct CLLocationCoordinate2D )arg2 forState:(NSInteger)arg3 ;
-(id)_placeholderCacheKey;
-(id)_previewCacheKey:(NSUInteger)arg0 ;
-(id)initWithIMChatItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(id)modificationDateForPreview:(id)arg0 ;
-(id)previewForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)previewURL;
-(id)previewURLForWidth:(NSUInteger)arg0 ;
-(id)savedPreviewFromURL:(id)arg0 ;
-(id)time;
-(id)transcriptTraitCollection;
-(void)_generateMapPreview;
-(void)_handleLocationDidChangeNotification:(id)arg0 ;
-(void)configureBalloonView:(id)arg0 ;
-(void)dealloc;
-(void)savePreview:(id)arg0 toURL:(id)arg1 ;


@end


#endif