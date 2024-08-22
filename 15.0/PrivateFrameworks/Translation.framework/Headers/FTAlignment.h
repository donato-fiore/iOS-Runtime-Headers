// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTALIGNMENT_H
#define FTALIGNMENT_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTAlignment : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *Alignment _root;
}


@property (readonly, nonatomic) NSArray *index;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Alignment *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Alignment *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::Alignment> )addObjectToBuffer:(*void)arg0 ;


@end


#endif