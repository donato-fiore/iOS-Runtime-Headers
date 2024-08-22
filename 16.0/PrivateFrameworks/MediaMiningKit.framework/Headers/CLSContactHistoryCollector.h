// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCONTACTHISTORYCOLLECTOR_H
#define CLSCONTACTHISTORYCOLLECTOR_H

@class NSData, NSString, NSMutableArray;
@protocol CNChangeHistoryEventVisitor;

#import <Foundation/Foundation.h>


@interface CLSContactHistoryCollector : NSObject <CNChangeHistoryEventVisitor>



@property (retain, nonatomic) NSData *contactHistoryToken; // ivar: _contactHistoryToken
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *deletedContactIdentifiers; // ivar: _deletedContactIdentifiers
@property (readonly, copy) NSString *description;
@property BOOL didDropEverything; // ivar: _didDropEverything
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *insertedContactIdentifiers; // ivar: _insertedContactIdentifiers
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *updatedContactIdentifiers; // ivar: _updatedContactIdentifiers


-(id)init;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif