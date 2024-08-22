// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WGWIDGETDATASOURCE_H
#define WGWIDGETDATASOURCE_H

@class NSString, NSArray;
@protocol _WGDataSource, WGDataSource;

#import <Foundation/Foundation.h>

#import "_WGConcreteDataSource.h"

@interface WGWidgetDataSource : NSObject <_WGDataSource, WGDataSource>



@property (retain, nonatomic, getter=_concreteDataSource, setter=_setConcreteDataSource:) _WGConcreteDataSource *concreteDataSource; // ivar: _concreteDataSource
@property (readonly, nonatomic) NSString *dataSourceIdentifier; // ivar: _dataSourceIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *parentDataSourceIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *widgetIdentifiers;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)widgetDatumWithIdentifier:(id)arg0 ;
-(void)addWidgetObserver:(id)arg0 completion:(id)arg1 ;
-(void)removeDatumWithIdentifier:(id)arg0 ;
-(void)removeWidgetObserver:(id)arg0 completion:(id)arg1 ;
-(void)replaceWithDatum:(id)arg0 ;


@end


#endif