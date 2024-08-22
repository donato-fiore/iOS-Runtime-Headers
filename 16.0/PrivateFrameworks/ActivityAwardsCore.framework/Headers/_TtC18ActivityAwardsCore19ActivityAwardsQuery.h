// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18ACTIVITYAWARDSCORE19ACTIVITYAWARDSQUERY_H
#define _TTC18ACTIVITYAWARDSCORE19ACTIVITYAWARDSQUERY_H

@class TtC18ActivityAwardsCore9BaseQuery;



@interface _TtC18ActivityAwardsCore19ActivityAwardsQuery : TtC18ActivityAwardsCore9BaseQuery {
    ? connection;
    ? lock;
    ? initialAwardsHandler;
    ? addedAwardsHandler;
    ? removedAwardsHandler;
    ? updatedAwardsHandler;
}




-(id)init;
-(void)dealloc;


@end


#endif