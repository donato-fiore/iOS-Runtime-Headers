// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKLISTTEMPLATE_H
#define IKLISTTEMPLATE_H



#import "IKViewElement.h"
#import "IKBackgroundElement.h"
#import "IKDocumentBannerElement.h"
#import "IKListElement.h"

@interface IKListTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKBackgroundElement *background;
@property (readonly, retain, nonatomic) IKDocumentBannerElement *documentBanner;
@property (readonly, retain, nonatomic) IKListElement *list;




@end


#endif