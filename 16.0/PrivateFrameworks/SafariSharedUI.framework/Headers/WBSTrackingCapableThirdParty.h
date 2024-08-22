// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSTRACKINGCAPABLETHIRDPARTY_H
#define WBSTRACKINGCAPABLETHIRDPARTY_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface WBSTrackingCapableThirdParty : NSObject

@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, copy, nonatomic) NSArray *firstParties; // ivar: _firstParties


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithDomain:(id)arg0 firstParties:(id)arg1 ;


@end


#endif