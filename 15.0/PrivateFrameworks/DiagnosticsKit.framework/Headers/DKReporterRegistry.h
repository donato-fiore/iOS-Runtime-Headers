// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKREPORTERREGISTRY_H
#define DKREPORTERREGISTRY_H

@class NSMutableDictionary, NSSet, NSString;
@protocol DKExtensionRegistry;

#import <Foundation/Foundation.h>


@interface DKReporterRegistry : NSObject <DKExtensionRegistry>



@property (retain, nonatomic) NSMutableDictionary *componentDedup; // ivar: _componentDedup
@property (readonly, nonatomic) NSSet *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) Class extensionClass;
@property (retain, nonatomic) NSMutableDictionary *generatorLookup; // ivar: _generatorLookup
@property (readonly, nonatomic) NSSet *generators;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class responseObjectClass;
@property (readonly) Class superclass;


-(id)generatorForComponentIdentity:(id)arg0 ;
-(id)init;
-(void)addExtensionAdapter:(id)arg0 ;
-(void)enumerateExtensionAdaptersWithBlock:(id)arg0 ;


@end


#endif