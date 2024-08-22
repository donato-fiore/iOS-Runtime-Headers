// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTSSUFILE_H
#define FLTSSUFILE_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FLTSSUMetadata.h"

@interface FLTSSUFile : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SSUFile _root;
}


@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) unsigned short format_version;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) FLTSSUMetadata *metadata;


-(id)categories_objectAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUFile *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUFile *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<SSUFile> )addObjectToBuffer:(*void)arg0 ;
-(void)categories_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif