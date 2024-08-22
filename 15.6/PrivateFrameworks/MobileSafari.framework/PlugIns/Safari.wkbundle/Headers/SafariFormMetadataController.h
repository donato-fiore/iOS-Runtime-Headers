// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAFARIFORMMETADATACONTROLLER_H
#define SAFARIFORMMETADATACONTROLLER_H

@class SFFormMetadataController;
@protocol QuickWebsiteSearchEventListener;



@interface SafariFormMetadataController : SFFormMetadataController {
    id<QuickWebsiteSearchEventListener> *_quickWebsiteSearchEventListener;
}




-(void)didFindSearchURLTemplateString:(id)arg0 inFrame:(id)arg1 pageController:(id)arg2 ;
-(void)invalidate;


@end


#endif