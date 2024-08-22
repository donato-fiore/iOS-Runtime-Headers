// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EBOFFICEARTREADERSTATE_H
#define EBOFFICEARTREADERSTATE_H



#import "OABReaderState.h"
#import "EXReadState.h"
#import "EBReaderState.h"

@interface EBOfficeArtReaderState : OABReaderState {
    EXReadState *mXmlDocumentState;
}


@property (readonly, weak) EBReaderState *readerState; // ivar: mReaderState


-(id)initWithReaderState:(id)arg0 ;
-(id)xmlDrawingState;


@end


#endif