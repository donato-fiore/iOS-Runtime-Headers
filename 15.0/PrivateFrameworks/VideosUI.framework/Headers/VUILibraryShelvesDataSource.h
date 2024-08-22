// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUILIBRARYSHELVESDATASOURCE_H
#define VUILIBRARYSHELVESDATASOURCE_H

@class NSDictionary, NSSet;
@protocol VUIShelvesDataSourceDelegate;


#import "VUILibraryDataSource.h"

@interface VUILibraryShelvesDataSource : VUILibraryDataSource

@property (retain, nonatomic) NSDictionary *dataSourcesByShelfType; // ivar: _dataSourcesByShelfType
@property (retain, nonatomic) NSSet *shelfTypes; // ivar: _shelfTypes
@property (weak, nonatomic) NSObject<VUIShelvesDataSourceDelegate> *shelvesDelegate; // ivar: _shelvesDelegate


-(id)initWithValidShelfTypes:(id)arg0 ;


@end


#endif