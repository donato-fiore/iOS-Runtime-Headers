// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSANALYTICSDATAPROVIDER_H
#define TPSANALYTICSDATAPROVIDER_H

@protocol TPSAnalyticsDataProviderDataSource;

#import <Foundation/Foundation.h>


@interface TPSAnalyticsDataProvider : NSObject

@property (weak, nonatomic) NSObject<TPSAnalyticsDataProviderDataSource> *dataSource; // ivar: _dataSource


-(BOOL)isNotificationModelControl;
-(NSUInteger)hintDisplayedCountForIdentifier:(id)arg0 ;
-(id)bundleIDForIdentifier:(id)arg0 ;
-(id)contextForIdentifier:(id)arg0 ;
-(id)correlationIDForIdentifier:(id)arg0 ;
-(id)deliveryInfoVersion;
-(id)displayTypeForIdentifier:(id)arg0 ;
-(id)experimentCampID;
-(id)experimentID;
-(id)initWithDataSource:(id)arg0 ;


@end


#endif