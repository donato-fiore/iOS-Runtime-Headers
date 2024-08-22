// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWNODESTILLIMAGEREFERENCEFRAMEBRACKETEDCAPTURESEQUENCENUMBERMESSAGE_H
#define BWNODESTILLIMAGEREFERENCEFRAMEBRACKETEDCAPTURESEQUENCENUMBERMESSAGE_H



#import "BWNodeMessage.h"

@interface BWNodeStillImageReferenceFrameBracketedCaptureSequenceNumberMessage : BWNodeMessage {
    int _referenceFrameBracketedCaptureSequenceNumber;
}


@property (readonly) int referenceFrameBracketedCaptureSequenceNumber;


+(id)newMessageWithStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg0 ;
-(id)_initWithStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg0 ;


@end


#endif