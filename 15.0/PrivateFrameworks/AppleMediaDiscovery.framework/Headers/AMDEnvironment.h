// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDENVIRONMENT_H
#define AMDENVIRONMENT_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "AMDURLBag.h"

@interface AMDEnvironment : NSObject

@property (retain, nonatomic) NSString *currentHost; // ivar: _currentHost
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSNumber *storefrontId; // ivar: _storefrontId
@property (retain, nonatomic) AMDURLBag *urlBag; // ivar: _urlBag
@property (retain, nonatomic) NSString *userId; // ivar: _userId


+(id)shared;
-(BOOL)updateUrlBagUsingHost:(id)arg0 ;
-(id)getCurrentHost;
-(id)getDomain;
-(id)getStorefrontId;
-(id)getUrlBag;
-(id)getUserId;
-(id)init;


@end


#endif