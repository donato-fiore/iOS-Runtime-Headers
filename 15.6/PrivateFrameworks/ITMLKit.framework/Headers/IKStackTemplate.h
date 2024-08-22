// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKSTACKTEMPLATE_H
#define IKSTACKTEMPLATE_H



#import "IKViewElement.h"
#import "IKBackgroundElement.h"
#import "IKCollectionListElement.h"
#import "IKDocumentBannerElement.h"

@interface IKStackTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKBackgroundElement *background;
@property (readonly, retain, nonatomic) IKCollectionListElement *collectionList;
@property (readonly, retain, nonatomic) IKDocumentBannerElement *documentBanner;




@end


#endif