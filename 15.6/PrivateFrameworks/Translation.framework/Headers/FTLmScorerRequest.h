// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTLMSCORERREQUEST_H
#define FTLMSCORERREQUEST_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTLmScorerRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *LmScorerRequest _root;
}


@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *task_name;
@property (readonly, nonatomic) NSString *transcript;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LmScorerRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LmScorerRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::LmScorerRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif