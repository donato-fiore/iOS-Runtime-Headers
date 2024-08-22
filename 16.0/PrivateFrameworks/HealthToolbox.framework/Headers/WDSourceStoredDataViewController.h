// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDSOURCESTOREDDATAVIEWCONTROLLER_H
#define WDSOURCESTOREDDATAVIEWCONTROLLER_H

@class HKSource;


#import "WDStoredDataByCategoryViewController.h"

@interface WDSourceStoredDataViewController : WDStoredDataByCategoryViewController

@property (retain, nonatomic) HKSource *source; // ivar: _source
@property (readonly, nonatomic) BOOL sourceHasData;
@property (readonly, nonatomic) BOOL sourceIsInstalled;


-(BOOL)shouldShowDeleteAllDataButton;
-(id)storedDataDisplayName;
-(id)storedDataPredicate;
-(void)deleteAllSourceData;
-(void)deleteAllStoredData;
-(void)deleteSource;


@end


#endif