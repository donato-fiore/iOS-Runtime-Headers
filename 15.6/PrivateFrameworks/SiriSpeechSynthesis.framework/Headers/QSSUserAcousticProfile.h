// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSUSERACOUSTICPROFILE_H
#define QSSUSERACOUSTICPROFILE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSUserAcousticProfile : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *UserAcousticProfile _root;
}


@property (readonly, nonatomic) NSData *acoustic_profile_blob;
@property (readonly, nonatomic) NSString *acoustic_profile_version;
@property (readonly, nonatomic) NSString *profile_checksum;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct UserAcousticProfile *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct UserAcousticProfile *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::UserAcousticProfile> )addObjectToBuffer:(*void)arg0 ;
-(void)acoustic_profile_blob:(id)arg0 ;


@end


#endif