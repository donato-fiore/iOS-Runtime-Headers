// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWNODEERRORMESSAGE_H
#define BWNODEERRORMESSAGE_H



#import "BWNodeMessage.h"
#import "BWNodeError.h"

@interface BWNodeErrorMessage : BWNodeMessage {
    BWNodeError *_nodeError;
}


@property (readonly) BWNodeError *nodeError;


+(id)newMessageWithNodeError:(id)arg0 ;
-(void)dealloc;


@end


#endif