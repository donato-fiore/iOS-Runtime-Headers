// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACCESSRESOURCEEQUIVALENCEWRAPPER_H
#define WFACCESSRESOURCEEQUIVALENCEWRAPPER_H


#import <Foundation/Foundation.h>

#import "WFAccessResource.h"

@interface WFAccessResourceEquivalenceWrapper : NSObject

@property (readonly, nonatomic) WFAccessResource *accessResource; // ivar: _accessResource


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithAccessResource:(id)arg0 ;


@end


#endif