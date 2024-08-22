// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTURELAYOUTASSERTION_H
#define SBSYSTEMAPERTURELAYOUTASSERTION_H

@class NSMutableSet, NSDate, NSString;
@protocol SAInvalidatable;

#import <Foundation/Foundation.h>


@interface SBSystemApertureLayoutAssertion : NSObject <SAInvalidatable>

 {
    id *_invalidationHandler;
    NSMutableSet *_invalidationBlocks;
}


@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger maximumPermittedLayoutMode; // ivar: _maximumPermittedLayoutMode
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)initWithMaximumPermittedLayoutMode:(NSInteger)arg0 reason:(id)arg1 invalidationHandler:(id)arg2 ;
-(void)addInvalidationBlock:(id)arg0 ;
-(void)dealloc;
-(void)invalidateWithReason:(id)arg0 ;


@end


#endif