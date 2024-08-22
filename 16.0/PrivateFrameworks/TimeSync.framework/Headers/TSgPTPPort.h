// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSGPTPPORT_H
#define TSGPTPPORT_H

@class NSString;
@protocol TSXgPTPPortConnectionClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSXgPTPPort.h"

@interface TSgPTPPort : NSObject <TSXgPTPPortConnectionClient>

 {
    TSXgPTPPort *_implXPC;
}


@property (readonly, nonatomic) NSUInteger clockIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (readonly, nonatomic) unsigned short portNumber;
@property (readonly, nonatomic) int portRole;
@property (readonly, nonatomic) int portType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue;
@property (readonly) Class superclass;


+(id)diagnosticDescriptionForInfo:(id)arg0 withIndent:(id)arg1 ;
+(id)diagnosticInfoForClockIdentifier:(NSUInteger)arg0 andPortNumber:(unsigned short)arg1 ;
+(id)gPTPPortWithClockIdentifier:(NSUInteger)arg0 andPortNumber:(unsigned short)arg1 ;
+(id)gPTPPortWithImplXPC:(id)arg0 ;
+(id)keyPathsForValuesAffectingClockIdentifier;
+(id)keyPathsForValuesAffectingPortNumber;
+(id)keyPathsForValuesAffectingPortRole;
+(id)keyPathsForValuesAffectingPortType;
+(id)keyPathsForValuesAffectingPropertyUpdateQueue;
-(BOOL)startAutomaticPropertyUpdates;
-(BOOL)stopAutomaticPropertyUpdates;
-(id)_impl;
-(id)init;
-(id)initWithClockIdentifier:(NSUInteger)arg0 andPortNumber:(unsigned short)arg1 ;
-(id)initWithImplXPC:(id)arg0 ;
-(void)dealloc;
-(void)interruptedConnectionForPort:(id)arg0 ;
-(void)serviceTerminated;
-(void)updateProperties;


@end


#endif