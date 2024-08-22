// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTODORECURRENCE_H
#define ASTODORECURRENCE_H

@class NSNumber, NSDate;
@protocol NSSecureCoding;


#import "ASRecurrence.h"
#import "ASToDo.h"

@interface ASToDoRecurrence : ASRecurrence <NSSecureCoding>



@property (retain, nonatomic) NSNumber *deadOccur; // ivar: _deadOccur
@property (weak, nonatomic) ASToDo *parentToDo; // ivar: _parentToDo
@property (retain, nonatomic) NSNumber *regenerate; // ivar: _regenerate
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)supportsSecureCoding;
+(id)asParseRules;
-(BOOL)_requiresParentEvent;
-(id)_transformedUntilDateForActiveSync:(id)arg0 ;
-(id)_untilDateForCalFrameworkWithParentStartDate:(id)arg0 ;
-(id)initWithCalRecurrence:(*void)arg0 parentToDo:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParentToDo:(id)arg0 ;
-(void)appendActiveSyncDataForTask:(id)arg0 toWBXMLData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;
-(void)saveToCalendarWithParentASToDo:(id)arg0 existingRecord:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(void)setUntilString:(id)arg0 ;


@end


#endif