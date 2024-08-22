// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTORECONTENTREPORTER_H
#define MPSTORECONTENTREPORTER_H

@class NSOperationQueue, NSDictionary;

#import <Foundation/Foundation.h>


@interface MPStoreContentReporter : NSObject {
    NSOperationQueue *_operationQueue;
    NSDictionary *_reportConcernBagDictionary;
}




+(id)sharedReporter;
-(id)_deleteCommentURLComponentsFromBag:(id)arg0 ;
-(id)_deletePostURLComponentsFromBag:(id)arg0 ;
-(id)_dictionariesForType:(NSInteger)arg0 ;
-(id)_reportConcernBagDictionary;
-(id)baseURLStringForReport;
-(id)init;
-(id)reportsForType:(NSInteger)arg0 contentID:(id)arg1 aucType:(id)arg2 commentText:(id)arg3 ;
-(void)_performWithBag:(id)arg0 ;
-(void)deleteComment:(id)arg0 activityID:(id)arg1 completion:(id)arg2 ;
-(void)deletePost:(id)arg0 completion:(id)arg1 ;
-(void)submitReport:(id)arg0 completion:(id)arg1 ;


@end


#endif