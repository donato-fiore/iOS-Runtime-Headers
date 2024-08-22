// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSETTINGSTABLEVIEWCONFIGURATION_H
#define PKSETTINGSTABLEVIEWCONFIGURATION_H

@class NSDiffableDataSourceSnapshot, NSArray;

#import <Foundation/Foundation.h>


@interface PKSettingsTableViewConfiguration : NSObject {
    NSDiffableDataSourceSnapshot *_currentSnapshot;
}


@property (readonly, nonatomic) NSArray *sections;


-(id)rowsForSection:(id)arg0 ;
-(id)snapshot;
-(void)appendSection:(id)arg0 rows:(id)arg1 ;


@end


#endif