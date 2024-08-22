// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _FPUNIONDATASOURCE_H
#define _FPUNIONDATASOURCE_H

@class NSArray, NSString;
@protocol FPCollectionDataSource, FPItemCollectionItemIDBasedDelegate, FPCollectionDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface _FPUnionDataSource : NSObject <FPCollectionDataSource, FPItemCollectionItemIDBasedDelegate>

 {
    NSArray *_collections;
    BOOL _isRunning;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FPCollectionDataSourceDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMoreIncoming;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCollections:(id)arg0 ;
-(void)collection:(id)arg0 didEncounterError:(id)arg1 ;
-(void)collection:(id)arg0 didUpdateItems:(id)arg1 replaceItemsByFormerID:(id)arg2 deleteItemsWithIDs:(id)arg3 ;
-(void)collection:(id)arg0 didUpdateObservedItem:(id)arg1 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg0 ;
-(void)enumerationMightHaveResumed;
-(void)invalidate;
-(void)start;


@end


#endif