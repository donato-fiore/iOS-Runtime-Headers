// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALCHANGEHISTORYCOLLECTOR_H
#define CALCHANGEHISTORYCOLLECTOR_H

@class NSString, NSMutableArray;
@protocol CNChangeHistoryEventVisitor;

#import <Foundation/Foundation.h>


@interface CalChangeHistoryCollector : NSObject <CNChangeHistoryEventVisitor>



@property (readonly, copy) NSString *debugDescription;
@property (retain) NSMutableArray *deletedContactIdentifiers; // ivar: _deletedContactIdentifiers
@property (readonly, copy) NSString *description;
@property BOOL didReset; // ivar: _didReset
@property BOOL hasChanges; // ivar: _hasChanges
@property (readonly) NSUInteger hash;
@property (retain) NSMutableArray *insertedContacts; // ivar: _insertedContacts
@property (readonly) Class superclass;
@property (retain) NSMutableArray *updatedContacts; // ivar: _updatedContacts


-(id)init;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif