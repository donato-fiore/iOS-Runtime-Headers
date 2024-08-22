// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVCARDLINE_H
#define CNVCARDLINE_H

@class NSString, NSArray;
@protocol CNVCardParameterLine;

#import <Foundation/Foundation.h>


@interface CNVCardLine : NSObject <CNVCardParameterLine>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *groupedLines; // ivar: _groupedLines
@property (readonly) NSString *groupingName; // ivar: _grouping
@property (readonly) NSUInteger hash;
@property (readonly) NSString *itemSeparator; // ivar: _itemSeparator
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSArray *parameters; // ivar: _parameters
@property (readonly) Class superclass;
@property (readonly) id *value; // ivar: _value


+(id)lineWithLiteralValue:(id)arg0 ;
+(id)lineWithName:(id)arg0 value:(id)arg1 ;
+(id)lineWithName:(id)arg0 value:(id)arg1 itemSeparator:(id)arg2 ;
+(id)versionPlaceholderLine;
-(BOOL)canSerializeWithStrategy:(id)arg0 ;
-(id)initWithName:(id)arg0 value:(id)arg1 itemSeparator:(id)arg2 ;
-(id)makeGroupingNameWithCounter:(*NSInteger)arg0 ;
-(void)addGroupedLine:(id)arg0 withCounter:(*NSInteger)arg1 ;
-(void)addParameterWithName:(id)arg0 value:(id)arg1 ;
-(void)insertParameterWithName:(id)arg0 value:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)serializeValueWithStrategy:(id)arg0 ;
-(void)serializeWithStrategy:(id)arg0 ;


@end


#endif