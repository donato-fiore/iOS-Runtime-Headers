// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBOFFICEARTREADERSTATE_H
#define WBOFFICEARTREADERSTATE_H



#import "OABReaderState.h"
#import "WXReadState.h"
#import "WBReader.h"

@interface WBOfficeArtReaderState : OABReaderState {
    WXReadState *mXmlDocumentState;
}


@property (nonatomic) int currentTextType; // ivar: mCurrentTextType
@property (weak, nonatomic) WBReader *reader; // ivar: mReader


-(id)initWithClient:(Class)arg0 ;
-(id)xmlDrawingState;


@end


#endif