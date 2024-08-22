// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHENVIRONMENTDATESPECIFIER_H
#define BLSHENVIRONMENTDATESPECIFIER_H

@class BLSAlwaysOnDateSpecifier, NSString;
@protocol BLSEnvironmentDateSpecifying, BLSHBacklightSceneHostEnvironment;

#import <Foundation/Foundation.h>


@interface BLSHEnvironmentDateSpecifier : NSObject <BLSEnvironmentDateSpecifying>



@property (readonly, nonatomic) BLSAlwaysOnDateSpecifier *dateSpecifier; // ivar: _dateSpecifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<BLSHBacklightSceneHostEnvironment> *environment; // ivar: _environment
@property (readonly, copy, nonatomic) NSString *environmentIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *userObject;


+(id)specifierWithPresentationDate:(id)arg0 fidelity:(NSInteger)arg1 environment:(id)arg2 ;
+(id)specifierWithPresentationDate:(id)arg0 fidelity:(NSInteger)arg1 environment:(id)arg2 userObject:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)bls_loggingString;
-(id)bls_shortLoggingString;
-(id)initWithPresentationDate:(id)arg0 fidelity:(NSInteger)arg1 environment:(id)arg2 userObject:(id)arg3 ;


@end


#endif