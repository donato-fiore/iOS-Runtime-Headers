// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTSSUINTENT_H
#define FLTSSUINTENT_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FLTSSUIntent : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SSUIntent _root;
}


@property (readonly, nonatomic) NSArray *examples;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *parameters;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)examples_objectAtIndex:(NSUInteger)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUIntent *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUIntent *)arg1 verify:(BOOL)arg2 ;
-(id)parameters_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<SSUIntent> )addObjectToBuffer:(*void)arg0 ;
-(void)examples_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)parameters_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif