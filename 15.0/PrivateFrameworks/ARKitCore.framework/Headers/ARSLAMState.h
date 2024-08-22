// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARSLAMSTATE_H
#define ARSLAMSTATE_H

@class NSSet, NSString, NSDictionary;
@protocol ARResultData, ARQATraceable, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARSLAMState : NSObject <ARResultData, ARQATraceable, NSSecureCoding>



@property (readonly, nonatomic) NSSet *addedAnchors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *removedAnchors;
@property (readonly, nonatomic) *CV3DSLAMStateContext slamState; // ivar: _slamState
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSDictionary *tracingEntry;
@property (readonly, nonatomic) NSSet *updatedAnchors;


+(BOOL)supportsSecureCoding;
-(BOOL)setSLAMState:(struct CV3DSLAMStateContext *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSLAMState:(struct CV3DSLAMStateContext *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif