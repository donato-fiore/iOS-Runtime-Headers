// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKGALLERYTEMPLATE_H
#define IKGALLERYTEMPLATE_H



#import "IKViewElement.h"
#import "IKBackgroundElement.h"
#import "IKDocumentBannerElement.h"
#import "IKGridElement.h"

@interface IKGalleryTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKBackgroundElement *background;
@property (readonly, retain, nonatomic) IKDocumentBannerElement *documentBanner;
@property (readonly, retain, nonatomic) IKGridElement *grid;




@end


#endif