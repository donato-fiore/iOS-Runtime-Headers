// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDEFAULTLAYOUTINSTRUCTION_H
#define SXDEFAULTLAYOUTINSTRUCTION_H

@class NSString;
@protocol SXLayoutInstruction;

#import <Foundation/Foundation.h>


@interface SXDefaultLayoutInstruction : NSObject <SXLayoutInstruction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)instruction;
-(BOOL)isFulfilledForBlueprint:(id)arg0 ;


@end


#endif