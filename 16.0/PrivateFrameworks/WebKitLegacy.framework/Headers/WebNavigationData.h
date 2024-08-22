// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBNAVIGATIONDATA_H
#define WEBNAVIGATIONDATA_H


#import <Foundation/Foundation.h>

#import "WebNavigationDataPrivate.h"

@interface WebNavigationData : NSObject {
    WebNavigationDataPrivate *_private;
}




-(BOOL)hasSubstituteData;
-(id)clientRedirectSource;
-(id)initWithURLString:(id)arg0 title:(id)arg1 originalRequest:(id)arg2 response:(id)arg3 hasSubstituteData:(BOOL)arg4 clientRedirectSource:(id)arg5 ;
-(id)originalRequest;
-(id)response;
-(id)title;
-(id)url;
-(void)dealloc;


@end


#endif