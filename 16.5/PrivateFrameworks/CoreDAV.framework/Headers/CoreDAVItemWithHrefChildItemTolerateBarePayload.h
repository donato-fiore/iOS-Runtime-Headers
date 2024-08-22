// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVITEMWITHHREFCHILDITEMTOLERATEBAREPAYLOAD_H
#define COREDAVITEMWITHHREFCHILDITEMTOLERATEBAREPAYLOAD_H

@class NSURL;


#import "CoreDAVItemWithHrefChildItem.h"
#import "CoreDAVHrefItem.h"

@interface CoreDAVItemWithHrefChildItemTolerateBarePayload : CoreDAVItemWithHrefChildItem {
    CoreDAVHrefItem *_virtualHref;
    NSURL *_baseURL;
}




-(id)description;
-(id)href;
-(void)parserSuggestsBaseURL:(id)arg0 ;
-(void)setPayload:(id)arg0 ;


@end


#endif