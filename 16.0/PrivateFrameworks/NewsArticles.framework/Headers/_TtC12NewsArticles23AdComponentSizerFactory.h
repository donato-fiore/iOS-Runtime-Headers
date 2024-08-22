// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12NEWSARTICLES23ADCOMPONENTSIZERFACTORY_H
#define _TTC12NEWSARTICLES23ADCOMPONENTSIZERFACTORY_H

@class NSString;
@protocol SXComponentSizerFactory;

#import <Foundation/Foundation.h>


@interface _TtC12NewsArticles23AdComponentSizerFactory : NSObject <SXComponentSizerFactory>

 {
    ? type;
    ? layoutStore;
    ? bannerAdLayoutAttributesFactory;
    ? bannerAdFactory;
}


@property (nonatomic, readonly) int role; // ivar: role
@property (nonatomic, readonly) NSString *type;


-(id)init;
-(id)sizerForComponent:(id)arg0 componentLayout:(id)arg1 layoutOptions:(id)arg2 DOMObjectProvider:(id)arg3 ;


@end


#endif