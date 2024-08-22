// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12NEWSARTICLES36ANFISSUECOVERLAYOUTATTRIBUTESFACTORY_H
#define _TTC12NEWSARTICLES36ANFISSUECOVERLAYOUTATTRIBUTESFACTORY_H

@protocol SXIssueCoverLayoutAttributesFactory;

#import <Foundation/Foundation.h>


@interface _TtC12NewsArticles36ANFIssueCoverLayoutAttributesFactory : NSObject <SXIssueCoverLayoutAttributesFactory>

 {
    ? issue;
    ? headline;
    ? issueCoverLayoutAttributesFactory;
}




-(id)createAttributesWithIssueCover:(id)arg0 options:(id)arg1 ;
-(id)init;


@end


#endif