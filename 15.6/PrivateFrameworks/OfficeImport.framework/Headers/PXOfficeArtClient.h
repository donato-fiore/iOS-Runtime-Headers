// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXOFFICEARTCLIENT_H
#define PXOFFICEARTCLIENT_H



#import "OAXClient.h"
#import "PXPresentationState.h"

@interface PXOfficeArtClient : OAXClient

@property (readonly, weak) PXPresentationState *presentationState; // ivar: mPresentationState


+(?)readPlaceholderBoundsTrackFromNode;
+(?)readPlaceholderTypeFromNode;
-(?)readBlipExtWithURI:(?)arg0 fromNode:(?)arg1 toDrawablestate;
-(?)readClientDataFromGraphicalFramePropertiesNode:(?)arg0 toDrawablestate;
-(?)readClientDataFromPictureNode:(?)arg0 toImagestate;
-(?)readClientDataFromShapeNode:(?)arg0 toShapestate;
-(?)readClientTextField:(?)arg0 identity:(?)arg1 paragraphstate;
-(?)readOlestate;
-(BOOL)chartAutoFillIsHollow;
-(BOOL)chartAutoStrokeIsHollow;
-(id)initWithState:(id)arg0 ;
-(void)postprocessHyperlink:(id)arg0 relationship:(id)arg1 state:(id)arg2 ;


@end


#endif