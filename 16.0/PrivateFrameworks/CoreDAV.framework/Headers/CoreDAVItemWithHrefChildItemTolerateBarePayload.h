// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVITEMWITHHREFCHILDITEMTOLERATEBAREPAYLOAD_H
#define COREDAVITEMWITHHREFCHILDITEMTOLERATEBAREPAYLOAD_H



#import "CoreDAVItemWithHrefChildItem.h"
#import "CoreDAVHrefItem.h"

@interface CoreDAVItemWithHrefChildItemTolerateBarePayload : CoreDAVItemWithHrefChildItem {
    CoreDAVHrefItem *_virtualHref;
}




-(id)description;
-(id)href;
-(void)setPayload:(id)arg0 ;


@end


#endif