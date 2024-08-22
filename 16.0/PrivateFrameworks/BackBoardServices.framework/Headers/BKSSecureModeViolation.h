// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSSECUREMODEVIOLATION_H
#define BKSSECUREMODEVIOLATION_H

@class NSArray, NSString, NSDictionary, NSNumber;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BKSSecureModeViolation : NSObject <BSDescriptionProviding>



@property (copy, nonatomic) NSArray *contextIds; // ivar: _contextIds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *layerNamesByContext; // ivar: _layerNamesByContext
@property (retain, nonatomic) NSNumber *processId; // ivar: _processId
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithProcessId:(id)arg0 contextIds:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif