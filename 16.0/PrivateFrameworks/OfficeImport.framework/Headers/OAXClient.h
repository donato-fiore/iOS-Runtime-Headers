// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAXCLIENT_H
#define OAXCLIENT_H

@protocol OAXClient;

#import <Foundation/Foundation.h>


@interface OAXClient : NSObject <OAXClient>





+(?)sourceDrawableIsTopLevel;
-(?)genericNonVisualPropertiesNodeForDrawableNode:(?)arg0 inNamespacestate;
-(?)readBlipExtWithURI:(?)arg0 fromNode:(?)arg1 toDrawablestate;
-(?)readClientDataFromGraphicDataNode:(?)arg0 toDiagramstate;
-(?)readClientDataFromGraphicalFramePropertiesNode:(?)arg0 toDrawablestate;
-(?)readClientDataFromGroupNode:(?)arg0 toGroupstate;
-(?)readClientDataFromNode:(?)arg0 toDrawablestate;
-(?)readClientDataFromPictureNode:(?)arg0 toImagestate;
-(?)readClientDataFromShapeNode:(?)arg0 toShapestate;
-(?)readClientDrawableFromXmlNodestate;
-(?)readClientTextField:(?)arg0 identity:(?)arg1 paragraphstate;
-(?)readGraphicDatastate;
-(?)readOlestate;
-(void)postprocessHyperlink:(id)arg0 relationship:(id)arg1 state:(id)arg2 ;


@end


#endif