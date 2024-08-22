// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXLAYOUTINSTRUCTIONFACTORY_H
#define SXLAYOUTINSTRUCTIONFACTORY_H

@class NSString;
@protocol SXLayoutInstructionFactory, SXPresentationAttributesProvider;

#import <Foundation/Foundation.h>


@interface SXLayoutInstructionFactory : NSObject <SXLayoutInstructionFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXPresentationAttributesProvider> *presentationAttributesProvider; // ivar: _presentationAttributesProvider
@property (readonly) Class superclass;


-(id)createInstructions;
-(id)initWithPresentationAttributesProvider:(id)arg0 ;


@end


#endif