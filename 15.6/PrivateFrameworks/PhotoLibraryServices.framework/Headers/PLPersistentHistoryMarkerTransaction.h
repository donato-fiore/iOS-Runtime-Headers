// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPERSISTENTHISTORYMARKERTRANSACTION_H
#define PLPERSISTENTHISTORYMARKERTRANSACTION_H

@class NSPersistentHistoryTransaction, NSString;
@protocol PLPersistentHistoryMarkerOverrides;


#import "PLPersistentHistoryMarker.h"

@interface PLPersistentHistoryMarkerTransaction : PLPersistentHistoryMarker <PLPersistentHistoryMarkerOverrides>

 {
    NSPersistentHistoryTransaction *_transaction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTransaction:(id)arg0 ;
-(id)overrride_changeRequestForFetching;
-(id)overrride_shortDescription;


@end


#endif