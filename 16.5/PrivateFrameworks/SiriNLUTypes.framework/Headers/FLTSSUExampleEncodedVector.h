// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTSSUEXAMPLEENCODEDVECTOR_H
#define FLTSSUEXAMPLEENCODEDVECTOR_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FLTSSUExampleEncodedVector : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SSUExampleEncodedVector _root;
}


@property (readonly, nonatomic) NSArray *data;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data_objectAtIndex:(NSUInteger)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUExampleEncodedVector *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUExampleEncodedVector *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<SSUExampleEncodedVector> )addObjectToBuffer:(*void)arg0 ;
-(void)data_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif