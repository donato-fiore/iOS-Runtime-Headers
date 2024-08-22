// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXVMLSTATE_H
#define PXVMLSTATE_H



#import "OAVReadState.h"
#import "ESDObject.h"
#import "PBPresentationReaderState.h"

@interface PXVmlState : OAVReadState {
    ESDObject *mLegacyTextGlobals;
    PBPresentationReaderState *mLegacyPresentationState;
}




-(id)legacyPresentationState;
-(id)legacyTextGlobals;
-(void)setLegacyPresentationState:(id)arg0 ;
-(void)setLegacyTextGlobals:(id)arg0 ;


@end


#endif