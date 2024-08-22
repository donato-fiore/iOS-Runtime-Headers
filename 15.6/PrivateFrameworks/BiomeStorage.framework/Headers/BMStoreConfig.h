// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMSTORECONFIG_H
#define BMSTORECONFIG_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "BMPruningPolicy.h"

@interface BMStoreConfig : NSObject <NSCopying>

 {
    NSUInteger _streamType;
}


@property (readonly, nonatomic) NSString *datastorePath; // ivar: _datastorePath
@property (readonly, nonatomic) NSUInteger datastoreVersion; // ivar: _datastoreVersion
@property (readonly, nonatomic) NSUInteger protectionClass; // ivar: _protectionClass
@property (retain, nonatomic) BMPruningPolicy *pruningPolicy; // ivar: _pruningPolicy
@property (copy, nonatomic) NSString *remoteStreamName; // ivar: _remoteStreamName
@property (readonly, nonatomic) NSUInteger segmentSize; // ivar: _segmentSize
@property (nonatomic) NSInteger storeLocationOption; // ivar: _storeLocationOption


+(NSUInteger)streamTypeFromStorePath:(id)arg0 ;
+(id)newPrivateStreamDefaultConfigurationWithProtectionClass:(NSUInteger)arg0 segmentSize:(NSUInteger)arg1 ;
+(id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)arg0 ;
+(id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)arg0 protectionClass:(NSUInteger)arg1 ;
+(id)newPublicStreamDefaultConfiguration;
+(id)newPublicStreamDefaultConfigurationWithProtectionClass:(NSUInteger)arg0 ;
+(id)newRestrictedStreamDefaultConfiguration;
+(id)newRestrictedStreamDefaultConfigurationWithProtectionClass:(NSUInteger)arg0 ;
+(id)newRestrictedStreamWithSegmentSize:(NSUInteger)arg0 ;
+(id)newRestrictedStreamWithSegmentSize:(NSUInteger)arg0 protectionClass:(NSUInteger)arg1 ;
+(id)newStreamDefaultConfigurationForPublicStream:(BOOL)arg0 ;
+(id)newStreamDefaultConfigurationForPublicStream:(BOOL)arg0 protectionClass:(NSUInteger)arg1 ;
+(id)newStreamDefaultConfigurationForPublicStream:(BOOL)arg0 protectionClass:(NSUInteger)arg1 segmentSize:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)streamType;
-(id)copyStoreConfigWithOption:(NSInteger)arg0 remoteStreamName:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStoreBasePath:(id)arg0 segmentSize:(NSUInteger)arg1 ;
-(id)initWithStoreBasePath:(id)arg0 segmentSize:(NSUInteger)arg1 protectionClass:(NSUInteger)arg2 ;
-(id)initWithStoreVersion:(NSUInteger)arg0 datastorePath:(id)arg1 maxAllowedMappedPages:(NSUInteger)arg2 segmentSize:(NSUInteger)arg3 segmentResizeFactor:(float)arg4 segmentPaddingFactor:(float)arg5 ;
-(id)initWithStoreVersion:(NSUInteger)arg0 storeBasePath:(id)arg1 segmentSize:(NSUInteger)arg2 protectionClass:(NSUInteger)arg3 ;
-(id)initWithStoreVersion:(NSUInteger)arg0 storeBasePath:(id)arg1 segmentSize:(NSUInteger)arg2 protectionClass:(NSUInteger)arg3 storeLocationOption:(NSInteger)arg4 remoteStreamName:(id)arg5 pruningPolicy:(id)arg6 ;


@end


#endif