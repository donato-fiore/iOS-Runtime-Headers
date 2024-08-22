// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTLATNNMITIGATORRESULT_H
#define FTLATNNMITIGATORRESULT_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTLatnnMitigatorResult : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *LatnnMitigatorResult _root;
}


@property (readonly, nonatomic) BOOL processed;
@property (readonly, nonatomic) CGFloat score;
@property (readonly, nonatomic) CGFloat threshold;
@property (readonly, nonatomic) NSString *version;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LatnnMitigatorResult *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LatnnMitigatorResult *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::LatnnMitigatorResult> )addObjectToBuffer:(*void)arg0 ;


@end


#endif