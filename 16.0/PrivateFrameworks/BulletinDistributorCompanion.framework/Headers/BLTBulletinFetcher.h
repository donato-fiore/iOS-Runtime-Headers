// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTBULLETINFETCHER_H
#define BLTBULLETINFETCHER_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface BLTBulletinFetcher : NSObject {
    NSDictionary *_bulletinIDs;
    NSArray *_sectionIDs;
    NSInteger _sectionIDsIndex;
    NSArray *_publisherMatchIDsForSection;
    NSUInteger _publisherMatchIDsForSectionIndex;
    id *_clientCompletion;
    id *_fetcher;
}




// +(id)batchBulletinFetchForBulletinIDs:(id)arg0 fetcher:(id)arg1 completion:(unk)arg2  ;
-(BOOL)_incrementSection;
-(void)_fetchBulletins;
-(void)_setBulletinIDs:(id)arg0 ;
-(void)_setClientCompletion:(id)arg0 ;
-(void)_setFetcher:(id)arg0 ;


@end


#endif