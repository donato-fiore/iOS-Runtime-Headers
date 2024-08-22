// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPREDICTIONCONTEXTDOMAIN_H
#define ATXPREDICTIONCONTEXTDOMAIN_H

@protocol ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXPredictionContextDomain : NSObject <ATXProtoBufWrapper>





-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonDict;
-(id)proto;


@end


#endif