// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPUBLISHERVIRTUALTABLECURSOR_H
#define BMPUBLISHERVIRTUALTABLECURSOR_H

@class NSString, BPSPublisher, BPSSubscription;
@protocol BPSSubscriber;

#import <Foundation/Foundation.h>

#import "BMStreamVirtualTable.h"

@interface BMPublisherVirtualTableCursor : NSObject <BPSSubscriber>

 {
    BOOL _complete;
    BOOL _pendingRowObject;
    id *_rowObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BPSPublisher *publisher; // ivar: _publisher
@property (readonly, nonatomic) NSInteger rowID; // ivar: _rowID
@property (readonly, nonatomic) id *rowObject;
@property (readonly, nonatomic) BPSSubscription *subscription; // ivar: _subscription
@property (readonly) Class superclass;
@property (readonly, nonatomic) BMStreamVirtualTable *virtualTable; // ivar: _virtualTable


+(id)new;
-(NSInteger)receiveInput:(id)arg0 ;
-(id)init;
-(id)initWithVirtualTable:(id)arg0 ;
-(void)advance;
-(void)cancel;
-(void)close;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)reset;
-(void)resetWithOptions:(id)arg0 ;


@end


#endif