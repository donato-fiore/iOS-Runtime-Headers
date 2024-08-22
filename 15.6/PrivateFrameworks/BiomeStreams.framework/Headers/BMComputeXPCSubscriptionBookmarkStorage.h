// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMCOMPUTEXPCSUBSCRIPTIONBOOKMARKSTORAGE_H
#define BMCOMPUTEXPCSUBSCRIPTIONBOOKMARKSTORAGE_H


#import <Foundation/Foundation.h>


@interface BMComputeXPCSubscriptionBookmarkStorage : NSObject



+(void)initializeBiomeDSLDirectoryForBootSession;
-(BOOL)checkExistenceOfBookmarkForSubscriptionWithIdentifier:(id)arg0 ;
-(id)readBookmarkForSubscriptionWithIdentifier:(id)arg0 success:(*BOOL)arg1 ;
-(void)removeBookmarkFileForSubscriptionWithIdentifier:(id)arg0 ;
-(void)writeBookmark:(id)arg0 forSubscriptionWithIdentifier:(id)arg1 ;


@end


#endif