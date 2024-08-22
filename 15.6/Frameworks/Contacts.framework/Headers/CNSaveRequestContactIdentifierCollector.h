// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSAVEREQUESTCONTACTIDENTIFIERCOLLECTOR_H
#define CNSAVEREQUESTCONTACTIDENTIFIERCOLLECTOR_H

@class NSArray, NSMutableArray, NSString;
@protocol CNChangeHistoryEventVisitorPrivate;

#import <Foundation/Foundation.h>

#import "CNSaveRequest.h"

@interface CNSaveRequestContactIdentifierCollector : NSObject <CNChangeHistoryEventVisitorPrivate>



@property (readonly) NSArray *allContactIdentifiers;
@property (readonly) NSMutableArray *allIdentifiers; // ivar: _allIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *insertedContactIdentifiers;
@property (readonly) NSMutableArray *insertedIdentifiers; // ivar: _insertedIdentifiers
@property (readonly) CNSaveRequest *request; // ivar: _request
@property (readonly) Class superclass;


-(id)initWithSaveRequest:(id)arg0 ;
-(void)collectIdentifiers;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDifferentMeCardEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitLinkContactsEvent:(id)arg0 ;
-(void)visitPreferredContactForImageEvent:(id)arg0 ;
-(void)visitPreferredContactForNameEvent:(id)arg0 ;
-(void)visitUnlinkContactEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif