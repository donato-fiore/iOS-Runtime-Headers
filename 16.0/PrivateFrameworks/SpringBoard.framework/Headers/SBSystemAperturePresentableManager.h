// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTUREPRESENTABLEMANAGER_H
#define SBSYSTEMAPERTUREPRESENTABLEMANAGER_H

@class NSMapTable, NSHashTable, NSString;
@protocol SAUILayoutObserving, SBPresentableIntercepting;

#import <Foundation/Foundation.h>

#import "SBSystemApertureController.h"

@interface SBSystemAperturePresentableManager : NSObject <SAUILayoutObserving, SBPresentableIntercepting>

 {
    NSMapTable *_presentablesToElements;
    NSMapTable *_elementsToAssertions;
    NSHashTable *_elementsThatDidAppear;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) SBSystemApertureController *elementRegistrar; // ivar: _elementRegistrar
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)willInterceptPresentable:(id)arg0 userInfo:(id)arg1 ;
-(id)_elementForPresentableCreatingIfNecessary:(id)arg0 elementGenerator:(id)arg1 ;
-(id)_existingAssertionForElement:(id)arg0 ;
-(id)_existingElementForPresentableWithIdentification:(id)arg0 ;
-(id)_existingPresentableWithIdentification:(id)arg0 ;
-(id)_existingPresentablesWithIdentification:(id)arg0 ;
-(id)_presentableElementForElementLayoutSpecifier:(id)arg0 ;
-(id)initWithElementRegistrar:(id)arg0 ;
-(id)revocationRequestedForPresentablesWithIdentification:(id)arg0 reason:(id)arg1 ;
-(void)_invalidateElement:(id)arg0 withReason:(id)arg1 ;
-(void)_noteElementDidAppear:(id)arg0 ;
-(void)_noteElementDidInvalidate:(id)arg0 reason:(id)arg1 ;
-(void)_registerElement:(id)arg0 ;
-(void)_removeAssertionForElement:(id)arg0 ;
-(void)_removeElementForPresentableWithIdentification:(id)arg0 ;
-(void)_removePresentableForElement:(id)arg0 ;
-(void)elementLayoutSpecifier:(id)arg0 layoutModeDidChange:(NSInteger)arg1 reason:(NSInteger)arg2 ;


@end


#endif