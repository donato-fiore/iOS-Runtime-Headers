// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTROLFLOWATTRIBUTIONTRACKER_H
#define WFCONTROLFLOWATTRIBUTIONTRACKER_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFControlFlowAttributionTracker : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableDictionary *attributionSetsInScope; // ivar: _attributionSetsInScope


+(BOOL)supportsSecureCoding;
-(id)attributionSetForCurrentScope;
-(id)contentCollectionByTaintingContentCollection:(id)arg0 ;
-(id)init;
-(id)initWithAttributionSetsInScope:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enteredScopeOfControlFlowAction:(id)arg0 withInput:(id)arg1 ;
-(void)leftScopeOfControlFlowAction:(id)arg0 ;


@end


#endif