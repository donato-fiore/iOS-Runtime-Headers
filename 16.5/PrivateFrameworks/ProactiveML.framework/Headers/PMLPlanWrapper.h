// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLPLANWRAPPER_H
#define PMLPLANWRAPPER_H

@class NSString;
@protocol PMLPlistAndChunksSerializableProtocol, PMLPlanProtocol;

#import <Foundation/Foundation.h>


@interface PMLPlanWrapper : NSObject <PMLPlistAndChunksSerializableProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PMLPlanProtocol> *plan; // ivar: _plan
@property (readonly) Class superclass;


-(id)init;
-(id)initWithPlan:(id)arg0 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;


@end


#endif