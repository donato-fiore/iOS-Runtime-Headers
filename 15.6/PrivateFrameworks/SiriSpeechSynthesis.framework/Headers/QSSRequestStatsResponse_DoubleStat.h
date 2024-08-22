// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSREQUESTSTATSRESPONSE_DOUBLESTAT_H
#define QSSREQUESTSTATSRESPONSE_DOUBLESTAT_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSRequestStatsResponse_DoubleStat : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *DoubleStat _root;
}


@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat value;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct DoubleStat *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct DoubleStat *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::RequestStatsResponse_::DoubleStat> )addObjectToBuffer:(*void)arg0 ;


@end


#endif