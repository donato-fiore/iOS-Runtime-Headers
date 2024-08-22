// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXFIRSTVIEWPORTLAYOUTINSTRUCTION_H
#define SXFIRSTVIEWPORTLAYOUTINSTRUCTION_H

@class NSString;
@protocol SXLayoutInstruction;

#import <Foundation/Foundation.h>


@interface SXFirstViewportLayoutInstruction : NSObject <SXLayoutInstruction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fullfilled; // ivar: _fullfilled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isFulfilledForBlueprint:(id)arg0 ;
-(void)didLayoutComponentBlueprint:(id)arg0 blueprint:(id)arg1 ;


@end


#endif