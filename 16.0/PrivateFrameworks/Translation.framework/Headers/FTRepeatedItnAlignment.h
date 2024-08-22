// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTREPEATEDITNALIGNMENT_H
#define FTREPEATEDITNALIGNMENT_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTRepeatedItnAlignment : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RepeatedItnAlignment _root;
}


@property (readonly, nonatomic) NSArray *itn_alignment;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RepeatedItnAlignment *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RepeatedItnAlignment *)arg1 verify:(BOOL)arg2 ;
-(id)itn_alignment_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::RepeatedItnAlignment> )addObjectToBuffer:(*void)arg0 ;
-(void)itn_alignment_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif