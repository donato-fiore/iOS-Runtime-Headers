// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFMESSAGEPERSISTENCEQUERYITERATOR_H
#define _MFMESSAGEPERSISTENCEQUERYITERATOR_H

@class EDPersistedMessageQueryIterator, NSString, NSMutableIndexSet;
@protocol MFSearchResultHandler, QueryProgressMonitor, _MFFlushableMessageSetIterator, EFCancelable;



@interface _MFMessagePersistenceQueryIterator : EDPersistedMessageQueryIterator <MFSearchResultHandler, QueryProgressMonitor, _MFFlushableMessageSetIterator, EFCancelable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableIndexSet *messageSet; // ivar: _messageSet
@property (readonly) Class superclass;


-(BOOL)handleMessage:(id)arg0 ;


@end


#endif