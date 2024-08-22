// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTRECOGNITIONCHOICE_H
#define FTRECOGNITIONCHOICE_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTRecognitionChoice : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RecognitionChoice _root;
}


@property (readonly, nonatomic) NSArray *alternative_index;
@property (readonly, nonatomic) int confidence;


-(id)alternative_index_objectAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionChoice *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionChoice *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::RecognitionChoice> )addObjectToBuffer:(*void)arg0 ;
-(void)alternative_index_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif