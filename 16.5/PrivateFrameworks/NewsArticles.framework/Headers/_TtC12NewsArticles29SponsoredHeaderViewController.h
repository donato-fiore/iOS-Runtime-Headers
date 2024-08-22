// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12NEWSARTICLES29SPONSOREDHEADERVIEWCONTROLLER_H
#define _TTC12NEWSARTICLES29SPONSOREDHEADERVIEWCONTROLLER_H

@class UIViewController;
@protocol SXDocumentSectionItemProvider;



@interface _TtC12NewsArticles29SponsoredHeaderViewController : UIViewController <SXDocumentSectionItemProvider>

 {
    ? renderer;
    ? label;
    ? headerDelegate;
}




-(CGFloat)sectionItemHeightForSize:(struct CGSize )arg0 traitCollection:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)sectionItemViewController;
-(void)viewDidLoad;


@end


#endif