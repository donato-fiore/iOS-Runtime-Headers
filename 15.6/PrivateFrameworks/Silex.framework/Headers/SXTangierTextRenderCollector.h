// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTANGIERTEXTRENDERCOLLECTOR_H
#define SXTANGIERTEXTRENDERCOLLECTOR_H

@class NSString, NSMutableDictionary, NSDictionary;
@protocol SXTextRenderCollector, SXTangierTextRepBehavior;

#import <Foundation/Foundation.h>


@interface SXTangierTextRenderCollector : NSObject <SXTextRenderCollector, SXTangierTextRepBehavior>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *flows; // ivar: _flows
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *layoutsByComponentIdentifier; // ivar: _layoutsByComponentIdentifier
@property (retain, nonatomic) NSDictionary *previousFlows; // ivar: _previousFlows
@property (readonly) Class superclass;


-(BOOL)tangierTextRepAllowsSelection:(id)arg0 ;
-(id)componentIdentifierForFlowLayout:(id)arg0 ;
-(id)flowLayoutForComponentIdentifier:(id)arg0 ;
-(id)infoForStorage:(id)arg0 selection:(id)arg1 ;
-(id)init;
-(id)itemWithIdentifier:(id)arg0 storage:(id)arg1 directLayerHost:(id)arg2 inItems:(id)arg3 ;
-(void)addTextStorage:(id)arg0 withLayout:(id)arg1 forNamedFlow:(id)arg2 directLayerHostView:(id)arg3 selectable:(BOOL)arg4 componentIdentifier:(id)arg5 ;
-(void)buildFlowsAndUpdateInfosWithICC:(id)arg0 ;
-(void)buildFlowsAndUpdateInfosWithICC:(id)arg0 updateBlock:(id)arg1 ;
-(void)storeItem:(id)arg0 forFlowName:(id)arg1 ;


@end


#endif