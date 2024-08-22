// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUPNEXTELEMENTDATASOURCE_H
#define NTKUPNEXTELEMENTDATASOURCE_H

@class REElementDataSource;



@interface NTKUpNextElementDataSource : REElementDataSource



-(id)supportedSections;
-(void)getElementsDuringDateInterval:(id)arg0 inSection:(NSUInteger)arg1 withHandler:(id)arg2 ;


@end


#endif