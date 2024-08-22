// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSCLIENTSETUPINFO_H
#define QSSCLIENTSETUPINFO_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSClientSetupInfo : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ClientSetupInfo _root;
}


@property (readonly, nonatomic) BOOL endpoint_extra_delay;
@property (readonly, nonatomic) float endpoint_threshold;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ClientSetupInfo *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ClientSetupInfo *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::ClientSetupInfo> )addObjectToBuffer:(*void)arg0 ;


@end


#endif