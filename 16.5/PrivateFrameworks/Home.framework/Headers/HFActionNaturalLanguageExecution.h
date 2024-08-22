// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACTIONNATURALLANGUAGEEXECUTION_H
#define HFACTIONNATURALLANGUAGEEXECUTION_H

@class NSSet, NSMutableSet;
@protocol HFAccessoryRepresentable;

#import <Foundation/Foundation.h>

#import "HFActionNaturalLanguageOptions.h"

@interface HFActionNaturalLanguageExecution : NSObject

@property (readonly, nonatomic) NSUInteger accessoryCount;
@property (retain, nonatomic) NSSet *actions; // ivar: _actions
@property (retain, nonatomic) NSSet *allInvolvedObjects; // ivar: _allInvolvedObjects
@property (readonly, nonatomic) NSMutableSet *indescribableActionTypes; // ivar: _indescribableActionTypes
@property (retain, nonatomic) NSSet *involvedServices; // ivar: _involvedServices
@property (nonatomic) BOOL named; // ivar: _named
@property (retain, nonatomic) HFActionNaturalLanguageOptions *options; // ivar: _options
@property (readonly, nonatomic) NSObject<HFAccessoryRepresentable> *singularInvolvedObject;


+(id)_accessoryRepresentingIDsInSet:(id)arg0 ;
+(id)executionWithActions:(id)arg0 options:(id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(void)updateInvolvedObjects;


@end


#endif