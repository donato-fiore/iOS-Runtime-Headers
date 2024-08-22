// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUIPEOPLESUGGESTIONIMAGEPROVIDER_H
#define SFUIPEOPLESUGGESTIONIMAGEPROVIDER_H

@class UIImage;


#import "SFUIImageProvider.h"
#import "SFUIAvatarImageRenderer.h"

@interface SFUIPeopleSuggestionImageProvider : SFUIImageProvider

@property (readonly, nonatomic) SFUIAvatarImageRenderer *imageRenderer; // ivar: _imageRenderer
@property (readonly, nonatomic) NSUInteger layoutDirection; // ivar: _layoutDirection
@property (readonly, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize


-(id)initWithTargetSize:(struct CGSize )arg0 layoutDirection:(NSUInteger)arg1 ;
-(int)requestAvatarImageForPeopleSuggestion:(id)arg0 resultHandler:(id)arg1 ;
-(int)requestTransportImageForPeopleSuggestion:(id)arg0 resultHandler:(id)arg1 ;
-(void)_deliverIconImage:(id)arg0 identifier:(id)arg1 error:(id)arg2 ;
-(void)_fetchAvatarImageForPeopleSuggestion:(id)arg0 ;
-(void)_fetchTransportImageForPeopleSuggestion:(id)arg0 ;
-(void)performImageRequest:(id)arg0 ;


@end


#endif