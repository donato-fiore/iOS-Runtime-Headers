// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALCALENDARMIGRATIONEXCHANGEPRINCIPAL_H
#define CALCALENDARMIGRATIONEXCHANGEPRINCIPAL_H

@class NSString;
@protocol CalCalendarMigrationPrincipal;

#import <Foundation/Foundation.h>


@interface CalCalendarMigrationExchangePrincipal : NSObject <CalCalendarMigrationPrincipal>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDelegate) BOOL delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *mailbox; // ivar: _mailbox
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *ownerUid; // ivar: _ownerUid
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *uid; // ivar: _uid


-(BOOL)addressIsAccountOwner:(id)arg0 ;
-(id)dictionaryForAccountProperties;
-(id)initWithUid:(id)arg0 mailbox:(id)arg1 ;


@end


#endif