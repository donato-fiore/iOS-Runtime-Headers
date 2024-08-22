// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNBUILDCHUNKIDENTIFIER_H
#define KNBUILDCHUNKIDENTIFIER_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface KNBuildChunkIdentifier : NSObject <NSCopying>



@property (readonly, nonatomic) NSUUID *buildUUID; // ivar: _buildUUID
@property (readonly, nonatomic) int chunkID; // ivar: _chunkID
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)emptyIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initEmptyIdentifier;
-(id)initWithBuild:(id)arg0 chunkID:(int)arg1 ;
-(id)initWithMessage:(*void)arg0 ;
-(id)resolveToChunkOnSlide:(id)arg0 ;
-(id)resolveToChunkUsingContext:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 ;


@end


#endif