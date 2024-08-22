// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSETTINGSIPV4_H
#define WFSETTINGSIPV4_H

@class NSArray, NSString, NSDictionary;
@protocol WFSettingsPersistable;

#import <Foundation/Foundation.h>


@interface WFSettingsIPV4 : NSObject <WFSettingsPersistable>



@property (retain, nonatomic) NSArray *addresses; // ivar: _addresses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *dhcpClientID; // ivar: _dhcpClientID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *items; // ivar: _items
@property (nonatomic) NSInteger method; // ivar: _method
@property (copy, nonatomic) NSString *router; // ivar: _router
@property (retain, nonatomic) NSArray *subnetMasks; // ivar: _subnetMasks
@property (readonly) Class superclass;


+(id)automaticConfig;
+(id)bootPConfig;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMethod:(NSInteger)arg0 addresses:(id)arg1 subnetMasks:(id)arg2 router:(id)arg3 dhcpClientID:(id)arg4 ;
-(id)protocol;


@end


#endif