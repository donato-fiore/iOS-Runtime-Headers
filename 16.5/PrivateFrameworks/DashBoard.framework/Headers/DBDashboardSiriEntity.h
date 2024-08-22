// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBDASHBOARDSIRIENTITY_H
#define DBDASHBOARDSIRIENTITY_H



#import "DBDashboardEntity.h"

@interface DBDashboardSiriEntity : DBDashboardEntity

@property (nonatomic, getter=isFloating) BOOL floating; // ivar: _floating


+(id)entity;
-(BOOL)isSiriEntity;


@end


#endif