// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTFINALBLAZARRESPONSE_H
#define FTFINALBLAZARRESPONSE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTFinalBlazarResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *FinalBlazarResponse _root;
}


@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct FinalBlazarResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct FinalBlazarResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::FinalBlazarResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif