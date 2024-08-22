// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFPERSISTEDMESSAGEFORWARDINGITERATOR_H
#define _MFPERSISTEDMESSAGEFORWARDINGITERATOR_H

@class NSString, NSMutableIndexSet;
@protocol MFSearchResultHandler, _MFFlushableMessageSetIterator, EFCancelable;

#import <Foundation/Foundation.h>


@interface _MFPersistedMessageForwardingIterator : NSObject <MFSearchResultHandler, _MFFlushableMessageSetIterator, EFCancelable>

 {
    uint8_t _cancelled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableIndexSet *messageSet; // ivar: _messageSet
@property (readonly) Class superclass;


-(BOOL)handleMessage:(id)arg0 ;
-(id)initWithHandler:(id)arg0 ;
-(void)cancel;
-(void)flush;


@end


#endif