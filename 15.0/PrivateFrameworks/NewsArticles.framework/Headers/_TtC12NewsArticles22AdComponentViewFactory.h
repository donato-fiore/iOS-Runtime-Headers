// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12NEWSARTICLES22ADCOMPONENTVIEWFACTORY_H
#define _TTC12NEWSARTICLES22ADCOMPONENTVIEWFACTORY_H

@class NSString;
@protocol SXComponentViewFactory;

#import <Foundation/Foundation.h>


@interface _TtC12NewsArticles22AdComponentViewFactory : NSObject <SXComponentViewFactory>

 {
    ? type;
    ? resolver;
    ? bannerAdFactory;
    ? integrator;
}


@property (nonatomic, readonly) int role; // ivar: role
@property (nonatomic, readonly) NSString *type;


-(id)componentViewForComponent:(id)arg0 ;
-(id)init;


@end


#endif