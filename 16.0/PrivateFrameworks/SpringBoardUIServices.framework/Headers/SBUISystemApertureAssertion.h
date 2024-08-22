// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUISYSTEMAPERTUREASSERTION_H
#define SBUISYSTEMAPERTUREASSERTION_H

@class NSMutableOrderedSet, NSString, NSDate, NSArray;
@protocol SBUISAInvalidatable;

#import <Foundation/Foundation.h>


@interface SBUISystemApertureAssertion : NSObject <SBUISAInvalidatable>

 {
    NSMutableOrderedSet *_invalidationBlocks;
    NSString *_invalidationReason;
}


@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic, getter=_descriptionConstituents) NSArray *descriptionConstituents;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic, getter=_invalidationReason) NSString *invalidationReason;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


-(id)init;
-(void)addInvalidationBlock:(id)arg0 ;
-(void)dealloc;
-(void)invalidateWithReason:(id)arg0 ;


@end


#endif