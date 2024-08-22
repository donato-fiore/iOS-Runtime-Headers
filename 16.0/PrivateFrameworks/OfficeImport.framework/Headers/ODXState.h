// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODXSTATE_H
#define ODXSTATE_H



#import "OCXReadState.h"
#import "OAXDrawingState.h"
#import "CXNamespace.h"

@interface ODXState : OCXReadState {
    OAXDrawingState *mOfficeArtState;
}


@property (retain, nonatomic) CXNamespace *ODXDiagramNamespace; // ivar: mODXDiagramNamespace


-(id)initWithOfficeArtState:(id)arg0 ;
-(id)officeArtState;
-(void)setupNSForXMLFormat:(int)arg0 ;


@end


#endif