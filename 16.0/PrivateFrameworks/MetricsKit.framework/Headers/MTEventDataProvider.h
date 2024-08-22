// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTEVENTDATAPROVIDER_H
#define MTEVENTDATAPROVIDER_H

@class NSArray, NSDictionary;
@protocol MTEventDataProviderDelegate;


#import "MTObject.h"

@interface MTEventDataProvider : MTObject

@property (retain) NSArray *additionalData; // ivar: _additionalData
@property (weak, nonatomic) NSObject<MTEventDataProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDictionary *knownFieldMethods; // ivar: _knownFieldMethods


-(SEL)knownFieldAccessorForFieldName:(id)arg0 ;
-(id)flattenAdditionalData;
-(id)knownFieldMethodsForKnownFields:(id)arg0 ;
-(id)knownFields;
-(id)processMetricsData:(id)arg0 performanceData:(id)arg1 ;
-(void)addFields:(id)arg0 ;
-(void)addFieldsWithBlock:(id)arg0 ;
-(void)addFieldsWithDictionary:(id)arg0 ;
-(void)addFieldsWithPromise:(id)arg0 ;


@end


#endif