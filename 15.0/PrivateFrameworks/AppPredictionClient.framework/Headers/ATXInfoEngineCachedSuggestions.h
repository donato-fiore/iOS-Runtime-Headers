// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXINFOENGINECACHEDSUGGESTIONS_H
#define ATXINFOENGINECACHEDSUGGESTIONS_H

@class NSArray;
@protocol ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXInfoEngineCachedSuggestions : NSObject <ATXProtoBufWrapper>



@property (retain, nonatomic) NSArray *entries; // ivar: _entries


-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;


@end


#endif