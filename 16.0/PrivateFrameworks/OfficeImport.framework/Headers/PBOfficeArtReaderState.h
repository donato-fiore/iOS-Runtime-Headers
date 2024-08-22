// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBOFFICEARTREADERSTATE_H
#define PBOFFICEARTREADERSTATE_H



#import "OABReaderState.h"
#import "PXPresentationState.h"
#import "PBPresentationReaderState.h"

@interface PBOfficeArtReaderState : OABReaderState {
    PXPresentationState *mXmlDocumentState;
}


@property (readonly, weak) PBPresentationReaderState *presentationState; // ivar: mPresentationState


-(id)drawableOnTgtSlideForShapeId:(int)arg0 ;
-(id)initWithPresentationState:(id)arg0 ;
-(id)xmlDocumentState;
-(id)xmlDrawingState;


@end


#endif