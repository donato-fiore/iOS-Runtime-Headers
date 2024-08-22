// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORDPRESSTERM_H
#define WFWORDPRESSTERM_H

@class MTLModel, NSString, NSDictionary, NSNumber;
@protocol MTLJSONSerializing, NSSecureCoding;



@interface WFWordPressTerm : MTLModel <MTLJSONSerializing, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *taxonomy; // ivar: _taxonomy
@property (readonly, copy, nonatomic) NSNumber *termId; // ivar: _termId


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;


@end


#endif