// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORDPRESSTERM_H
#define WFWORDPRESSTERM_H

@class MTLModel, NSString, NSDictionary, NSNumber;
@protocol MTLJSONSerializing;



@interface WFWordPressTerm : MTLModel <MTLJSONSerializing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *taxonomy; // ivar: _taxonomy
@property (readonly, copy, nonatomic) NSNumber *termId; // ivar: _termId


+(id)JSONKeyPathsByPropertyKey;


@end


#endif