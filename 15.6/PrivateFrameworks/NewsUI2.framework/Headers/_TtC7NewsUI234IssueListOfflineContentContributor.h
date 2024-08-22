// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7NEWSUI234ISSUELISTOFFLINECONTENTCONTRIBUTOR_H
#define _TTC7NEWSUI234ISSUELISTOFFLINECONTENTCONTRIBUTOR_H

@class SwiftObject;
@protocol FCOfflineIssueListObserving;



@interface _TtC7NewsUI234IssueListOfflineContentContributor : SwiftObject <FCOfflineIssueListObserving>

 {
    ? offlineContentRequests;
    ? offlineIssueList;
}




-(void)offlineIssueList:(id)arg0 didAddIssues:(id)arg1 removeIssues:(id)arg2 ;


@end


#endif