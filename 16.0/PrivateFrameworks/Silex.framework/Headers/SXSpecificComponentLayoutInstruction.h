// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXSPECIFICCOMPONENTLAYOUTINSTRUCTION_H
#define SXSPECIFICCOMPONENTLAYOUTINSTRUCTION_H

@class NSString;
@protocol SXLayoutInstruction;

#import <Foundation/Foundation.h>


@interface SXSpecificComponentLayoutInstruction : NSObject <SXLayoutInstruction>



@property (readonly, nonatomic) NSString *componentIdentifier; // ivar: _componentIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)instructionWithIdentifier:(id)arg0 ;
-(BOOL)isFulfilledForBlueprint:(id)arg0 ;


@end


#endif