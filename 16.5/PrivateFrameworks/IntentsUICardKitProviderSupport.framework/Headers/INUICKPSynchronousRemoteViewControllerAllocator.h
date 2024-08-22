// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INUICKPSYNCHRONOUSREMOTEVIEWCONTROLLERALLOCATOR_H
#define INUICKPSYNCHRONOUSREMOTEVIEWCONTROLLERALLOCATOR_H

@class NSArray, NSString, NSMutableArray, NSMutableSet, INInteraction, NSMutableDictionary, NSDictionary;
@protocol INUICKPInterfaceSectionOrganizing, INUICKPSynchronousRemoteViewControllerDelegate, INUICKPViewControllerAllocating, INUICKPViewControllerAllocatingDelegate;

#import <Foundation/Foundation.h>


@interface INUICKPSynchronousRemoteViewControllerAllocator : NSObject <INUICKPInterfaceSectionOrganizing, INUICKPSynchronousRemoteViewControllerDelegate, INUICKPViewControllerAllocating>

 {
    Class _synchronousRemoteViewControllerClass;
}


@property (readonly, copy, nonatomic) NSArray *allocatedViewControllers;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<INUICKPViewControllerAllocatingDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *finalInterfaceSections; // ivar: _finalInterfaceSections
@property (readonly, nonatomic) NSMutableSet *handledParameters; // ivar: _handledParameters
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) INInteraction *interaction; // ivar: _interaction
@property (readonly, nonatomic) NSMutableArray *mutableRedundantInterfaceSections; // ivar: _mutableRedundantInterfaceSections
@property (readonly, nonatomic) NSMutableArray *mutableSynchronousRemoteViewControllers; // ivar: _mutableSynchronousRemoteViewControllers
@property (readonly, nonatomic) NSMutableDictionary *mutableSynchronousRemoteViewControllersByInitialInterfaceSection; // ivar: _mutableSynchronousRemoteViewControllersByInitialInterfaceSection
@property (readonly, copy, nonatomic) NSArray *redundantInterfaceSections;
@property (nonatomic) BOOL requiresUserConsent; // ivar: _requiresUserConsent
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *viewControllersByInitialInterfaceSection;


-(CGFloat)boundingWidthForSynchronousRemoteViewController:(id)arg0 ;
-(id)_unhandledParametersForInterfaceSection:(id)arg0 ;
-(id)init;
-(id)organizedInterfaceSections;
-(void)_beginRecursivelyConnectingForInterfaceSectionQueue:(id)arg0 completion:(id)arg1 ;
-(void)_recursivelyConnectForInterfaceSectionQueue:(id)arg0 recursionDepth:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)performAllocationsFromInteraction:(id)arg0 initialInterfaceSections:(id)arg1 completion:(id)arg2 ;
-(void)setSynchronousRemoteViewControllerClass:(Class)arg0 ;


@end


#endif