// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCHANGEHISTORYRESULTEVENTCONVERTER_H
#define CNCHANGEHISTORYRESULTEVENTCONVERTER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CNContactStore.h"
#import "CNChangeHistoryEventFactory.h"

@interface CNChangeHistoryResultEventConverter : NSObject

@property (readonly, copy) NSArray *additionalContactKeyDescriptors; // ivar: _additionalContactKeyDescriptors
@property (readonly) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly) CNChangeHistoryEventFactory *factory; // ivar: _factory


-(id)eventsFromResult:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 additionalContactKeyDescriptors:(id)arg1 ;


@end


#endif