// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTITNREQUEST_H
#define FTITNREQUEST_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTItnRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ItnRequest _root;
}


@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSArray *words_list;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ItnRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ItnRequest *)arg1 verify:(BOOL)arg2 ;
-(id)words_list_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::ItnRequest> )addObjectToBuffer:(*void)arg0 ;
-(void)words_list_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif