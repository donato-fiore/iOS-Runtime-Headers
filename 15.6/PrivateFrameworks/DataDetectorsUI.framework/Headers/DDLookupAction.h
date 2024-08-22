// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDLOOKUPACTION_H
#define DDLOOKUPACTION_H

@class NSString, RVQuery;


#import "DDParsecPreviewAction.h"

@interface DDLookupAction : DDParsecPreviewAction {
    NSString *_queryString;
    _NSRange _queryStringRange;
    RVQuery *_query;
}




-(id)createViewController;
-(id)initWithQueryString:(id)arg0 range:(struct _NSRange )arg1 context:(id)arg2 ;
-(id)initWithRVQuery:(id)arg0 context:(id)arg1 ;
-(id)menuActions;
-(void)adaptForPresentationInPopover:(BOOL)arg0 ;


@end


#endif