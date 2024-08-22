// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSEXTERNALDISPLAYLAYOUTELEMENT_H
#define SBSEXTERNALDISPLAYLAYOUTELEMENT_H

@class FBSDisplayLayoutElement;



@interface SBSExternalDisplayLayoutElement : FBSDisplayLayoutElement

@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;


+(id)elementWithIdentifier:(id)arg0 presenting:(BOOL)arg1 ;
-(id)succinctDescriptionBuilder;


@end


#endif