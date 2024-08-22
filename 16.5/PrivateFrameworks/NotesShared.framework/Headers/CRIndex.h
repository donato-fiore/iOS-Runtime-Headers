// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRINDEX_H
#define CRINDEX_H

@class NSString, NSArray;
@protocol NSCopying, CRDataType, CRCoding;

#import <Foundation/Foundation.h>


@interface CRIndex : NSObject <NSCopying, CRDataType, CRCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *indexPath; // ivar: _indexPath
@property (readonly) Class superclass;


+(id)indexForReplica:(id)arg0 betweenIndex:(id)arg1 andIndex:(id)arg2 ;
+(id)indexWithPath:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)depth;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)indexAtDepth:(NSUInteger)arg0 withInteger:(NSInteger)arg1 replica:(id)arg2 ;
-(id)init;
-(id)initWithCRCoder:(id)arg0 ;
-(id)nextIndexForReplica:(id)arg0 ;
-(id)previousIndexForReplica:(id)arg0 ;
-(id)tombstone;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)mergeWith:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif