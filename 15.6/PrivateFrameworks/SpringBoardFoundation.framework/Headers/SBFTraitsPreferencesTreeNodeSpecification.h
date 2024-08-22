// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSPREFERENCESTREENODESPECIFICATION_H
#define SBFTRAITSPREFERENCESTREENODESPECIFICATION_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBFTraitsParticipant.h"

@interface SBFTraitsPreferencesTreeNodeSpecification : NSObject <NSCopying, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat order; // ivar: _order
@property (retain, nonatomic) SBFTraitsParticipant *parentParticipant; // ivar: _parentParticipant
@property (retain, nonatomic) SBFTraitsParticipant *participant; // ivar: _participant
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithParticipant:(id)arg0 parentParticipant:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif