// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFDEMOMODEFACERECOGNITIONITEMPROVIDER_H
#define HFDEMOMODEFACERECOGNITIONITEMPROVIDER_H

@class HMHome, NSMutableSet;


#import "HFItemProvider.h"
#import "HFDemoModeFaceRecognitionDataSource.h"

@interface HFDemoModeFaceRecognitionItemProvider : HFItemProvider

@property (retain, nonatomic) HFDemoModeFaceRecognitionDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) NSMutableSet *personItems; // ivar: _personItems


-(id)init;
-(id)initForMode:(NSInteger)arg0 home:(id)arg1 ;
-(id)items;
-(id)reloadItems;


@end


#endif