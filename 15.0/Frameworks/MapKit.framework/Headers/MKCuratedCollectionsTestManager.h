// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKCURATEDCOLLECTIONSTESTMANAGER_H
#define MKCURATEDCOLLECTIONSTESTMANAGER_H

@protocol MKCuratedCollectionsSyncCoordinator;

#import <Foundation/Foundation.h>


@interface MKCuratedCollectionsTestManager : NSObject <MKCuratedCollectionsSyncCoordinator>





-(BOOL)collectionIsSaved:(id)arg0 ;
-(BOOL)collectionIsSavedWithIdentifier:(id)arg0 ;
-(id)placeWithCollectionUsingJSONAtPath:(id)arg0 ;


@end


#endif