// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASEVENTEXCEPTION_H
#define ASEVENTEXCEPTION_H

@class NSDate, NSNumber, NSMutableDictionary;
@protocol ASParsingAcceptingTopLevelLeaves, NSSecureCoding;


#import "ASEvent.h"

@interface ASEventException : ASEvent <ASParsingAcceptingTopLevelLeaves, NSSecureCoding>



@property (retain, nonatomic) NSDate *exceptionStartTime; // ivar: _exceptionStartTime
@property (retain, nonatomic) NSNumber *isDeleted; // ivar: _isDeleted
@property (weak, nonatomic) ASEvent *originalEvent; // ivar: _originalEvent
@property (retain, nonatomic) NSMutableDictionary *placeHolder; // ivar: _placeHolder


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)supportsSecureCoding;
+(id)asParseRules;
+(id)eventExceptionWithCalEvent:(*void)arg0 originalEvent:(id)arg1 account:(id)arg2 ;
-(BOOL)deleteFromCalendar;
-(BOOL)fillOutMissingExternalIds;
-(BOOL)hasOccurrenceInTheFuture;
-(BOOL)verifyExternalIds;
-(id)_transformedExceptionStartDateForActiveSync:(id)arg0 isFloating:(BOOL)arg1 ;
-(id)_transformedExceptionStartDateForCalFramework:(id)arg0 ;
-(id)description;
-(id)exceptionDate;
-(id)initWithCalEvent:(*void)arg0 originalEvent:(id)arg1 account:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExceptionStartTime:(id)arg0 ;
-(id)serverIdForCalFrameworkWithParentEvent:(id)arg0 ;
-(id)serverIdForCalFrameworkWithParentServerId:(id)arg0 ;
-(id)uidGeneratedIfNecessaryWithLocalEvent:(*void)arg0 ;
-(void)_loadAttributesFromCalEvent:(*void)arg0 withKnownExceptionDate:(id)arg1 forAccount:(id)arg2 ;
-(void)appendActiveSyncDataForTask:(id)arg0 toWBXMLData:(id)arg1 ;
-(void)applyPlaceHolder;
-(void)clearPlaceHolder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadClientIDs;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;
-(void)postProcessApplicationData;
-(void)saveToCalendarWithParentASEvent:(id)arg0 existingRecord:(*void)arg1 intoCalendar:(*void)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(*BOOL)arg4 account:(id)arg5 ;
-(void)setExceptionDate:(id)arg0 ;
-(void)setObject:(id)arg0 forDCCPT:(int)arg1 ;
-(void)takeValuesFromParentForAccount:(id)arg0 ;


@end


#endif