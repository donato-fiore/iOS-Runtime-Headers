// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTUSERPARAMETERS_H
#define FTUSERPARAMETERS_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTUserParameters : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *UserParameters _root;
}


@property (readonly, nonatomic) NSString *fork_id;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct UserParameters *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct UserParameters *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::UserParameters> )addObjectToBuffer:(*void)arg0 ;


@end


#endif