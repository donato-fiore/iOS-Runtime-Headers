// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFSATISFIEDACTIVITYCONDITION_H
#define _MFSATISFIEDACTIVITYCONDITION_H

@class EFObservable, NSString;
@protocol MFActivityCondition;

#import <Foundation/Foundation.h>


@interface _MFSatisfiedActivityCondition : NSObject <MFActivityCondition>



@property (readonly, nonatomic) EFObservable *conditionsObservable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isSatisfied) BOOL satisfied;
@property (readonly) Class superclass;




@end


#endif