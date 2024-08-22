// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKMAINTEMPLATE_H
#define IKMAINTEMPLATE_H



#import "IKViewElement.h"
#import "IKBackgroundElement.h"
#import "IKDocumentBannerElement.h"
#import "IKButtonElement.h"
#import "IKMenuBarElement.h"

@interface IKMainTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKBackgroundElement *background;
@property (readonly, retain, nonatomic) IKDocumentBannerElement *banner;
@property (readonly, retain, nonatomic) IKButtonElement *button;
@property (readonly, retain, nonatomic) IKMenuBarElement *menuBar;




@end


#endif