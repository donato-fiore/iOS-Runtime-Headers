// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSCREATELANGUAGEPROFILERESPONSE_H
#define QSSCREATELANGUAGEPROFILERESPONSE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSUserLanguageProfile.h"

@interface QSSCreateLanguageProfileResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *CreateLanguageProfileResponse _root;
}


@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) BOOL incomplete_profile;
@property (readonly, nonatomic) BOOL recreate_apg_prons;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) QSSUserLanguageProfile *user_language_profile;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CreateLanguageProfileResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CreateLanguageProfileResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::CreateLanguageProfileResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif