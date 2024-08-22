// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIANEGOTIATORSTREAMGROUPCONFIGURATION_H
#define VCMEDIANEGOTIATORSTREAMGROUPCONFIGURATION_H

@class NSOrderedSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VCMediaNegotiatorStreamGroupConfiguration : NSObject <NSCopying>

 {
    unsigned int _cipherSuite;
}


@property (readonly, nonatomic) NSOrderedSet *codecConfigs; // ivar: _codecConfigs
@property (nonatomic) unsigned int groupID; // ivar: _groupID
@property (nonatomic) unsigned int mediaSubtype; // ivar: _mediaSubtype
@property (nonatomic) unsigned int mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSOrderedSet *streamConfigs; // ivar: _streamConfigs
@property (nonatomic) unsigned int syncGroupID; // ivar: _syncGroupID


+(id)streamGroupConfigWithGroupID:(unsigned int)arg0 mediaType:(unsigned int)arg1 subtype:(unsigned int)arg2 syncGroupID:(unsigned int)arg3 cipherSuite:(unsigned int)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)indexOfCodecConfig:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithGroupID:(unsigned int)arg0 mediaType:(unsigned int)arg1 subtype:(unsigned int)arg2 syncGroupID:(unsigned int)arg3 ;
-(id)initWithGroupID:(unsigned int)arg0 mediaType:(unsigned int)arg1 subtype:(unsigned int)arg2 syncGroupID:(unsigned int)arg3 cipherSuite:(unsigned int)arg4 ;
-(void)addCodecConfig:(id)arg0 ;
-(void)addStreamConfig:(id)arg0 ;
-(void)dealloc;
-(void)removeStreamConfigs:(struct _NSRange )arg0 ;


@end


#endif