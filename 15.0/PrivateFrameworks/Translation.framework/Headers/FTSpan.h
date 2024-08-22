// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTSPAN_H
#define FTSPAN_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTSpan : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *Span _root;
}


@property (readonly, nonatomic) BOOL do_not_translate;
@property (readonly, nonatomic) int end_index;
@property (readonly, nonatomic) NSString *meta_info;
@property (readonly, nonatomic) int start_index;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Span *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Span *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::Span> )addObjectToBuffer:(*void)arg0 ;


@end


#endif