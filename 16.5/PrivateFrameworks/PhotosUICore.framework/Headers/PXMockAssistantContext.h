// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMOCKASSISTANTCONTEXT_H
#define PXMOCKASSISTANTCONTEXT_H

@class NSArray, NSString;
@protocol PXAssistantContext;

#import <Foundation/Foundation.h>


@interface PXMockAssistantContext : NSObject <PXAssistantContext>

 {
    NSArray *_stepContextIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_stepContextWithIdentifier:(id)arg0 viewTitle:(id)arg1 firstButtonType:(NSInteger)arg2 ;
-(id)init;
-(id)initialStepContextIdentifiers;
-(id)nextStepContextIdentifierFromStepContextIdentifier:(id)arg0 ;
-(id)stepContextForStepContextIdentifier:(id)arg0 ;


@end


#endif