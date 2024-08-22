// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMTOPICENTITY_H
#define BMTOPICENTITY_H

@class NSDictionary, NSString;
@protocol BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMTopicEntity : NSObject <BMProtoBufWrapper>



@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *topicId; // ivar: _topicId


-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithTopicId:(id)arg0 displayName:(id)arg1 attributes:(id)arg2 ;
-(id)proto;


@end


#endif