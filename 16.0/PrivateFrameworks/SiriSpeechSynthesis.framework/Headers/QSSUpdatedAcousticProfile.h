// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSUPDATEDACOUSTICPROFILE_H
#define QSSUPDATEDACOUSTICPROFILE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSUserAcousticProfile.h"

@interface QSSUpdatedAcousticProfile : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *UpdatedAcousticProfile _root;
}


@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) QSSUserAcousticProfile *updated_acoustic_profile;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct UpdatedAcousticProfile *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct UpdatedAcousticProfile *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::UpdatedAcousticProfile> )addObjectToBuffer:(*void)arg0 ;


@end


#endif