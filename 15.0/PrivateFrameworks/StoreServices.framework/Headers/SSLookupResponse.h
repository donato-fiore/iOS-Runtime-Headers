// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSLOOKUPRESPONSE_H
#define SSLOOKUPRESPONSE_H

@class NSMutableArray, NSDictionary, NSArray, NSString, NSDate;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>

#import "SSMetricsConfiguration.h"
#import "SSMetricsPageEvent.h"

@interface SSLookupResponse : NSObject <SSXPCCoding>

 {
    NSMutableArray *_itemOrder;
    NSDictionary *_response;
}


@property (readonly, nonatomic) NSArray *allItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SSMetricsConfiguration *metricsConfiguration;
@property (retain, nonatomic, setter=_setMetricsPageEvent:) SSMetricsPageEvent *metricsPageEvent; // ivar: _metricsPageEvent
@property (readonly, nonatomic) NSDictionary *responseDictionary;
@property (readonly) Class superclass;


-(id)appStoreURLWithReason:(NSInteger)arg0 initialIndex:(NSInteger)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithLocationResponseDictionary:(id)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)itemForKey:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)_enumerateItemsWithBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif