// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFMAKEIMAGEFROMPDFPAGECOLORSPACEPARAMETER_H
#define WFMAKEIMAGEFROMPDFPAGECOLORSPACEPARAMETER_H

@class WFEnumerationParameter, NSArray, WFAction, NSString;
@protocol WFActionEventObserver;



@interface WFMakeImageFromPDFPageColorspaceParameter : WFEnumerationParameter <WFActionEventObserver>

 {
    NSArray *_possibleStates;
}


@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)possibleStatesDidChange;


@end


#endif