// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSCHOICEALIGNMENT_H
#define QSSCHOICEALIGNMENT_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSChoiceAlignment : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ChoiceAlignment _root;
}


@property (readonly, nonatomic) NSArray *post_itn_choice_indices;
@property (readonly, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignments;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ChoiceAlignment *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ChoiceAlignment *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::ChoiceAlignment> )addObjectToBuffer:(*void)arg0 ;


@end


#endif