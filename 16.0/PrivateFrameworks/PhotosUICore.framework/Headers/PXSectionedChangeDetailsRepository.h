// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSECTIONEDCHANGEDETAILSREPOSITORY_H
#define PXSECTIONEDCHANGEDETAILSREPOSITORY_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXSectionedChangeDetailsRepository : NSObject {
    NSMutableArray *_allChangeDetails;
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, nonatomic) NSInteger historyLimit; // ivar: _historyLimit


-(id)changeDetailsFromDataSourceIdentifier:(NSInteger)arg0 toDataSourceIdentifier:(NSInteger)arg1 ;
-(id)coalescedChangeDetailsFromDataSourceIdentifier:(NSInteger)arg0 toDataSourceIdentifier:(NSInteger)arg1 ;
-(id)init;
-(id)initWithChangeHistoryLimit:(NSInteger)arg0 ;
-(void)addChangeDetails:(id)arg0 ;


@end


#endif