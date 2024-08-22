// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFULYSSESSHEET_H
#define WFULYSSESSHEET_H

@class MTLModel, NSString, NSDictionary, NSArray;
@protocol MTLJSONSerializing, WFNaming, NSSecureCoding;



@interface WFUlyssesSheet : MTLModel <MTLJSONSerializing, WFNaming, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *keywords; // ivar: _keywords
@property (readonly, nonatomic) NSArray *notes; // ivar: _notes
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)allowedSecureCodingClassesByPropertyKey;


@end


#endif