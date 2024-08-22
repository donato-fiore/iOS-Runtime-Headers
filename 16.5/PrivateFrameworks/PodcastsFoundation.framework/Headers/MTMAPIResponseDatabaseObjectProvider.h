// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTMAPIRESPONSEDATABASEOBJECTPROVIDER_H
#define MTMAPIRESPONSEDATABASEOBJECTPROVIDER_H

@protocol NSFetchedResultsControllerDelegate, _TtP18PodcastsFoundation42MAPIResponseDatabaseObjectProviderDelegate_;

#import <Foundation/Foundation.h>


@interface MTMAPIResponseDatabaseObjectProvider : NSObject <NSFetchedResultsControllerDelegate>

 {
    ? response;
    ? databaseObjectsCache;
    ? needsParsing;
    ? showsFRC;
    ? episodesFRC;
}


@property (nonatomic, retain) NSObject<_TtP18PodcastsFoundation42MAPIResponseDatabaseObjectProviderDelegate_> *delegate; // ivar: delegate


-(id)databaseObjectWithStoreID:(NSInteger)arg0 contentType:(NSInteger)arg1 ;
-(id)init;
-(id)initWithResponse:(id)arg0 ;
-(void)controllerDidChangeContent:(id)arg0 ;


@end


#endif