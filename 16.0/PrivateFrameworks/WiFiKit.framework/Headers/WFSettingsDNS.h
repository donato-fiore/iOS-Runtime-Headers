// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSETTINGSDNS_H
#define WFSETTINGSDNS_H

@class NSString, NSDictionary, NSArray;
@protocol WFSettingsPersistable;

#import <Foundation/Foundation.h>


@interface WFSettingsDNS : NSObject <WFSettingsPersistable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *items; // ivar: _items
@property (retain, nonatomic) NSArray *searchDomains; // ivar: _searchDomains
@property (retain, nonatomic) NSArray *serverAddresses; // ivar: _serverAddresses
@property (readonly) Class superclass;


+(id)automaticConfig;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithServerAddresses:(id)arg0 searchDomains:(id)arg1 ;
-(id)protocol;


@end


#endif