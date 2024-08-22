// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTODOISTPROJECT_H
#define WFTODOISTPROJECT_H

@class MTLModel, WFColor, NSString, NSDictionary;
@protocol NSSecureCoding, MTLJSONSerializing;



@interface WFTodoistProject : MTLModel <NSSecureCoding, MTLJSONSerializing>



@property (readonly, nonatomic) BOOL collapsed; // ivar: _collapsed
@property (readonly, nonatomic) WFColor *color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger projectId; // ivar: _projectId
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;


@end


#endif