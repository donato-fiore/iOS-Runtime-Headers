// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDLOOKUPACTION_H
#define DDLOOKUPACTION_H

@class NSString, RVQuery;


#import "DDParsecPreviewAction.h"

@interface DDLookupAction : DDParsecPreviewAction {
    NSString *_queryString;
    _NSRange _queryStringRange;
    RVQuery *_query;
    id *_reportAnIssueBlock;
    id *_reportAnIssueMetadataFetchingBlock;
}




-(id)createViewController;
-(id)iconName;
-(id)initWithQueryString:(id)arg0 range:(struct _NSRange )arg1 context:(id)arg2 ;
-(id)initWithRVQuery:(id)arg0 context:(id)arg1 ;
// -(id)initWithRVQuery:(id)arg0 reportAnIssueBlock:(id)arg1 context:(unk)arg2  ;
// -(id)initWithRVQuery:(id)arg0 reportAnIssueBlock:(id)arg1 metadataFetchingBlock:(unk)arg2 context:(id)arg3  ;
-(id)menuActions;
-(void)adaptForPresentationInPopover:(BOOL)arg0 ;


@end


#endif