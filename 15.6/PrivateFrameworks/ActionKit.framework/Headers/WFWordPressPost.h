// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORDPRESSPOST_H
#define WFWORDPRESSPOST_H

@class MTLModel, NSString, NSDictionary, NSURL, NSNumber;
@protocol MTLJSONSerializing, NSSecureCoding;



@interface WFWordPressPost : MTLModel <MTLJSONSerializing, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURL *link; // ivar: _link
@property (readonly, copy, nonatomic) NSNumber *postId; // ivar: _postId
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;


@end


#endif