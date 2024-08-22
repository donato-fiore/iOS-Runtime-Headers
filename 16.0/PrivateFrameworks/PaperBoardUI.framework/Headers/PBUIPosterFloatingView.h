// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIPOSTERFLOATINGVIEW_H
#define PBUIPOSTERFLOATINGVIEW_H

@class UIView, BSCompoundAssertion, NSString, _UILegibilitySettings;
@protocol PBUIReplicaPortalSource;



@interface PBUIPosterFloatingView : UIView <PBUIReplicaPortalSource>

 {
    BSCompoundAssertion *_currentUsers;
}


@property (readonly, copy, nonatomic) NSString *cacheIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIView *defaultFloatingLayerStandin; // ivar: _defaultFloatingLayerStandin
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL effectsAreBakedIn;
@property (readonly, nonatomic, getter=isFloatingLayerStandin) BOOL floatingLayerHasStandin; // ivar: _floatingLayerHasStandin
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *targetView;


-(BOOL)floatingLayerHasStandin;
-(id)acquireSourceUsageAssertionForView:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;


@end


#endif