// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTCREATELANGUAGEPROFILEREQUEST_H
#define FTCREATELANGUAGEPROFILEREQUEST_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTUserLanguageProfile.h"

@interface FTCreateLanguageProfileRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *CreateLanguageProfileRequest _root;
}


@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSArray *user_data;
@property (readonly, nonatomic) FTUserLanguageProfile *user_language_profile;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CreateLanguageProfileRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CreateLanguageProfileRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::CreateLanguageProfileRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif