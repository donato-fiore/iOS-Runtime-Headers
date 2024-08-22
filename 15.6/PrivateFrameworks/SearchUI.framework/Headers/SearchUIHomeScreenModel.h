// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIHOMESCREENMODEL_H
#define SEARCHUIHOMESCREENMODEL_H

@class SBHSelectedApplicationDataSource, SBHIconModel;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SearchUIHomeScreenModel : NSObject

@property (retain, nonatomic) SBHSelectedApplicationDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) SBHIconModel *iconModel; // ivar: _iconModel
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


+(id)sharedInstance;
-(id)appIconForApplicationBundleIdentifier:(id)arg0 ;
-(id)clipIconForIdentifier:(id)arg0 ;
-(id)init;


@end


#endif