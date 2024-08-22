// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTINPUTWRITINGSESSION_H
#define PKTEXTINPUTWRITINGSESSION_H

@class NSMutableSet, NSNumber;
@protocol PKTextInputWritingSessionDelegate;

#import <Foundation/Foundation.h>

#import "PKTextInputElement.h"

@interface PKTextInputWritingSession : NSObject {
    BOOL _isInvalidated;
    NSMutableSet *_pendingWritingEndedElements;
    BOOL _didSuppressGesturesOverReservedSpace;
    NSNumber *_sessionIdentifier;
    PKTextInputElement *_currentTargetElement;
    id<PKTextInputWritingSessionDelegate> *_delegate;
    CGFloat _beginTimestamp;
}




-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif