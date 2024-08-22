// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTSSUEXAMPLE_H
#define FLTSSUEXAMPLE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

#import "FLTSSUExampleEncodedVector.h"
#import "FLTSSUExampleUtterance.h"

@interface FLTSSUExample : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SSUExample _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *data;
@property (readonly, nonatomic) FLTSSUExampleEncodedVector *dataAsFLTSSUExampleEncodedVector;
@property (readonly, nonatomic) FLTSSUExampleUtterance *dataAsFLTSSUExampleUtterance;
@property (readonly, nonatomic) NSInteger data_type;


+(Class)data_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)data_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUExample *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUExample *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<SSUExample> )addObjectToBuffer:(*void)arg0 ;


@end


#endif