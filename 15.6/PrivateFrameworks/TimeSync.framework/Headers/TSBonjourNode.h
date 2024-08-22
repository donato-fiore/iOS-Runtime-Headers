// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSBONJOURNODE_H
#define TSBONJOURNODE_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface TSBonjourNode : NSObject

@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (copy, nonatomic) NSDictionary *interfaces; // ivar: _interfaces
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


-(id)init;
-(id)initWithServiceName:(id)arg0 type:(id)arg1 andDomain:(id)arg2 ;
-(void)addedOnInterface:(unsigned int)arg0 named:(id)arg1 ;
-(void)removedFromInterface:(unsigned int)arg0 named:(id)arg1 ;


@end


#endif