// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTQSSVERSIONINFO_H
#define FTQSSVERSIONINFO_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTQSSVersionInfo : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *QSSVersionInfo _root;
}


@property (readonly, nonatomic) NSString *qss_version_brane;
@property (readonly, nonatomic) NSString *qss_version_server;
@property (readonly, nonatomic) NSString *qss_version_serverkit;
@property (readonly, nonatomic) NSString *qss_version_siritts;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct QSSVersionInfo *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct QSSVersionInfo *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::QSSVersionInfo> )addObjectToBuffer:(*void)arg0 ;


@end


#endif