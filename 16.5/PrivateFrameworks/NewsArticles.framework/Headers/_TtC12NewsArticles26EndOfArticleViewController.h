// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12NEWSARTICLES26ENDOFARTICLEVIEWCONTROLLER_H
#define _TTC12NEWSARTICLES26ENDOFARTICLEVIEWCONTROLLER_H

@class UIViewController;
@protocol NAArticleFooterType, NAEndOfArticleResultProviderType, NAArticleFooterDelegate, NAEndOfArticleResultProviderDelegate;



@interface _TtC12NewsArticles26EndOfArticleViewController : UIViewController <NAArticleFooterType, NAEndOfArticleResultProviderType>

 {
    ? styler;
    ? eventHandler;
    ? blueprintViewController;
    ? overriddenTraitCollection;
    ? gutterViewController;
    ? bottomSpacerView;
    ? urlHandler;
}


@property (nonatomic, weak) NSObject<NAArticleFooterDelegate> *footerDelegate; // ivar: footerDelegate
@property (nonatomic, weak) NSObject<NAEndOfArticleResultProviderDelegate> *resultProviderDelegate; // ivar: resultProviderDelegate


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;


@end


#endif