// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSVOCTOKEN_H
#define QSSVOCTOKEN_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSVocToken : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *VocToken _root;
}


@property (readonly, nonatomic) NSData *blob;
@property (readonly, nonatomic) NSString *orthography;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct VocToken *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct VocToken *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::VocToken> )addObjectToBuffer:(*void)arg0 ;
-(void)blob:(id)arg0 ;


@end


#endif