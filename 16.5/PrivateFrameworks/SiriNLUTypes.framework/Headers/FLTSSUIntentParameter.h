// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTSSUINTENTPARAMETER_H
#define FLTSSUINTENTPARAMETER_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FLTSSUIntentParameter : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SSUIntentParameter _root;
}


@property (readonly, nonatomic) NSString *example_value;
@property (readonly, nonatomic) NSString *name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUIntentParameter *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUIntentParameter *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<SSUIntentParameter> )addObjectToBuffer:(*void)arg0 ;


@end


#endif