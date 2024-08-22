// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACLASSREGISTRY_H
#define SACLASSREGISTRY_H


#import <Foundation/Foundation.h>


@interface SAClassRegistry : NSObject



+(Class)classForAceClassName:(id)arg0 inGroupWithIdentifier:(id)arg1 ;
+(id)sharedClassRegistry;
+(void)initialize;
+(void)registerAcronym:(id)arg0 forGroupWithIdentifier:(id)arg1 ;
+(void)registerClass:(Class)arg0 forAceClassName:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
-(Class)classForAceClassWithName:(id)arg0 inGroupWithIdentifier:(id)arg1 ;
-(void)registerClass:(Class)arg0 forAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2 ;


@end


#endif