// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKKEYCHAINPASSWORDFACADE_H
#define CRKKEYCHAINPASSWORDFACADE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CRKKeychainPasswordFacade : NSObject

@property (readonly, copy, nonatomic) NSDictionary *baseQueryAttributes; // ivar: _baseQueryAttributes


-(BOOL)removePasswordForService:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPassword:(id)arg0 forService:(id)arg1 accessGroup:(id)arg2 error:(*id)arg3 ;
-(id)errorForPasswordStatus:(int)arg0 ;
-(id)initWithBaseQueryAttributes:(id)arg0 ;
-(id)makeQueryWithAttributes:(id)arg0 ;
-(id)passwordForService:(id)arg0 ;
-(id)passwordForService:(id)arg0 error:(*id)arg1 ;
-(void)addAccessibilityAttributeToQuery:(id)arg0 ;
-(void)setPassword:(id)arg0 forService:(id)arg1 accessGroup:(id)arg2 ;


@end


#endif