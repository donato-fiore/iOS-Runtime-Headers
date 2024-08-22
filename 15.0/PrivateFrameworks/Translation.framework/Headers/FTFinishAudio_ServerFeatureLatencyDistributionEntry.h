// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTFINISHAUDIO_SERVERFEATURELATENCYDISTRIBUTIONENTRY_H
#define FTFINISHAUDIO_SERVERFEATURELATENCYDISTRIBUTIONENTRY_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTFinishAudio_ServerFeatureLatencyDistributionEntry : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ServerFeatureLatencyDistributionEntry _root;
}


@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) float value;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ServerFeatureLatencyDistributionEntry *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ServerFeatureLatencyDistributionEntry *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::FinishAudio_::ServerFeatureLatencyDistributionEntry> )addObjectToBuffer:(*void)arg0 ;


@end


#endif