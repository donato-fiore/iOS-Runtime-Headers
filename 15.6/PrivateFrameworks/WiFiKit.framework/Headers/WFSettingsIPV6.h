// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSETTINGSIPV6_H
#define WFSETTINGSIPV6_H

@class NSArray, NSString, NSDictionary;
@protocol WFSettingsPersistable;

#import <Foundation/Foundation.h>


@interface WFSettingsIPV6 : NSObject <WFSettingsPersistable>



@property (retain, nonatomic) NSArray *addresses; // ivar: _addresses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *items; // ivar: _items
@property (nonatomic) NSInteger method; // ivar: _method
@property (retain, nonatomic) NSArray *prefixLengths; // ivar: _prefixLengths
@property (copy, nonatomic) NSString *router; // ivar: _router
@property (readonly) Class superclass;


+(id)automaticConfig;
+(id)linkLocalConfig;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMethod:(NSInteger)arg0 addresses:(id)arg1 prefixLengths:(id)arg2 router:(id)arg3 ;
-(id)protocol;


@end


#endif