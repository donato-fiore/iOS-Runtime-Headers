// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HISTORYTABLEVIEWDATASOURCECHANGE_H
#define HISTORYTABLEVIEWDATASOURCECHANGE_H

@class NSIndexPath;

#import <Foundation/Foundation.h>


@interface HistoryTableViewDataSourceChange : NSObject

@property (retain, nonatomic) NSIndexPath *changeIndexPath; // ivar: _changeIndexPath
@property (nonatomic) NSInteger changeType; // ivar: _changeType
@property (nonatomic, getter=isSectionChange) BOOL sectionChange; // ivar: _sectionChange


+(id)changeWithType:(NSInteger)arg0 indexPath:(id)arg1 isSectionChange:(BOOL)arg2 ;


@end


#endif