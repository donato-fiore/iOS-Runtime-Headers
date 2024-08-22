// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKDIAGNOSTICREGISTRY_H
#define DKDIAGNOSTICREGISTRY_H

@class NSString, NSMutableDictionary, NSArray;
@protocol DKExtensionRegistry;

#import <Foundation/Foundation.h>


@interface DKDiagnosticRegistry : NSObject <DKExtensionRegistry>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *diagnosticLookup; // ivar: _diagnosticLookup
@property (readonly, nonatomic) NSArray *diagnostics;
@property (readonly, nonatomic) Class extensionClass;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class responseObjectClass;
@property (readonly) Class superclass;


-(id)adapterForIdentifier:(id)arg0 ;
-(id)diagnosticForIdentifier:(id)arg0 ;
-(id)init;
-(void)addExtensionAdapter:(id)arg0 ;
-(void)enumerateExtensionAdaptersWithBlock:(id)arg0 ;


@end


#endif