// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORDPRESSPOSTTYPE_H
#define WFWORDPRESSPOSTTYPE_H

@class MTLModel, NSString, NSDictionary;
@protocol MTLJSONSerializing;



@interface WFWordPressPostType : MTLModel <MTLJSONSerializing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSDictionary *labels; // ivar: _labels
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(id)JSONKeyPathsByPropertyKey;


@end


#endif