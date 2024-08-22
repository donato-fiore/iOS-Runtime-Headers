// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASATTENDEE_H
#define ASATTENDEE_H

@class NSString, NSMutableDictionary, NSDate;
@protocol ASParsingAcceptingTopLevelLeaves, NSSecureCoding;


#import "ASItem.h"

@interface ASAttendee : ASItem <ASParsingAcceptingTopLevelLeaves, NSSecureCoding>



@property (retain, nonatomic) NSString *email; // ivar: _email
@property (retain, nonatomic) NSString *invitedBy; // ivar: _invitedBy
@property (nonatomic) int localId; // ivar: _localId
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableDictionary *placeHolder; // ivar: _placeHolder
@property (retain, nonatomic) NSDate *proposedEndTime; // ivar: _proposedEndTime
@property (retain, nonatomic) NSDate *proposedStartTime; // ivar: _proposedStartTime
@property (nonatomic) int role; // ivar: _role
@property (nonatomic) int status; // ivar: _status


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)supportsSecureCoding;
+(id)asParseRules;
-(id)copyOfSelfWithoutLocalID;
-(id)fullEmailString;
-(id)icsUserAddress;
-(id)init;
-(id)initWithCalAttendee:(*void)arg0 parentEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)appendActiveSyncDataForTask:(id)arg0 toData:(id)arg1 ;
-(void)applyPlaceHolder;
-(void)clearPlaceHolder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)saveToCalendarWithParentASEvent:(id)arg0 existingRecord:(*void)arg1 isDefaultCalendar:(BOOL)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(*BOOL)arg4 account:(id)arg5 ;
-(void)setObject:(id)arg0 forDCCPT:(int)arg1 ;


@end


#endif