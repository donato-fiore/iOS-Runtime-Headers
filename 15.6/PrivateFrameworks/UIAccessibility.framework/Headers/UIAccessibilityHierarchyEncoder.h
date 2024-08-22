// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACCESSIBILITYHIERARCHYENCODER_H
#define UIACCESSIBILITYHIERARCHYENCODER_H


#import <Foundation/Foundation.h>

#import "UIAccessibilityElementTraversalOptions.h"

@interface UIAccessibilityHierarchyEncoder : NSObject

@property (retain, nonatomic) id *rootElement; // ivar: _rootElement
@property (nonatomic) BOOL shouldResolveRemoteElements; // ivar: _shouldResolveRemoteElements
@property (retain, nonatomic) UIAccessibilityElementTraversalOptions *traversalOptions; // ivar: _traversalOptions


-(id)encodeWithError:(*id)arg0 ;
-(id)initWithRootElement:(id)arg0 traversalOptions:(id)arg1 ;
-(struct CGRect )_convertAccessibilityFrameOfElement:(id)arg0 toViewSpaceOfContainer:(id)arg1 remoteParent:(id)arg2 ;
-(void)_resolveLeafElementsForRemoteElement:(id)arg0 rootElement:(id)arg1 addingToLeafElementDescriptions:(id)arg2 ;


@end


#endif