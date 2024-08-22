// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12NEWSARTICLES25ANFISSUECOVERVIEWPROVIDER_H
#define _TTC12NEWSARTICLES25ANFISSUECOVERVIEWPROVIDER_H

@protocol SXIssueCoverViewProvider;

#import <Foundation/Foundation.h>


@interface _TtC12NewsArticles25ANFIssueCoverViewProvider : NSObject <SXIssueCoverViewProvider>

 {
    ? issue;
    ? headline;
    ? layoutAttributesFactory;
    ? renderer;
}




-(id)init;
-(id)viewForIssueCover:(id)arg0 ;
-(void)presentIssueCover:(id)arg0 onView:(id)arg1 options:(id)arg2 ;


@end


#endif