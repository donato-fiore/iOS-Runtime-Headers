// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODISESSION_H
#define ODISESSION_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "_TtC7CoreODI18ODISessionInternal.h"

@interface ODISession : NSObject

@property (readonly, nonatomic) _TtC7CoreODI18ODISessionInternal *_internalSession; // ivar: _internalSession
@property (readonly, nonatomic) NSDate *_lastAttributeDate; // ivar: _lastAttributeDate


-(id)description;
-(id)initForTransaction;
-(id)initWithServiceIdentifier:(id)arg0 forDSIDType:(NSUInteger)arg1 ;
-(id)initWithServiceIdentifier:(id)arg0 forDSIDType:(NSUInteger)arg1 andLocationBundle:(id)arg2 ;
-(id)initWithServiceIdentifier:(id)arg0 forDSIDType:(NSUInteger)arg1 andLocationBundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)getAssessment:(id)arg0 ;
-(void)getAssessmentForTransaction:(id)arg0 ;
-(void)provideFeedbackOnPayloadOutcome:(NSUInteger)arg0 ;
-(void)updateWithAdditionalAttributes:(id)arg0 ;


@end


#endif