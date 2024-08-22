// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOWEBDOMAIN_H
#define MOWEBDOMAIN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MOWebDomain : NSObject

@property (readonly) NSString *domain; // ivar: _domain


+(BOOL)compareDomain:(id)arg0 withDomainPattern:(id)arg1 outExactMatch:(*BOOL)arg2 ;
-(id)initWithDomain:(id)arg0 ;


@end


#endif