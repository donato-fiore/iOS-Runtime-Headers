// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTWORDTIMINGINFO_H
#define FTWORDTIMINGINFO_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTWordTimingInfo : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *WordTimingInfo _root;
}


@property (readonly, nonatomic) unsigned int length;
@property (readonly, nonatomic) unsigned int offset;
@property (readonly, nonatomic) unsigned int sample_idx;
@property (readonly, nonatomic) float timestamp;
@property (readonly, nonatomic) NSString *word;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct WordTimingInfo *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct WordTimingInfo *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::WordTimingInfo> )addObjectToBuffer:(*void)arg0 ;


@end


#endif