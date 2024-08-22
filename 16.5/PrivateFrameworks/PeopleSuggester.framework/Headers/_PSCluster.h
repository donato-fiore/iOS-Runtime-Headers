// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSCLUSTER_H
#define _PSCLUSTER_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSCluster : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableArray *convexHull; // ivar: _convexHull
@property (retain, nonatomic) NSMutableArray *points; // ivar: _points


+(BOOL)supportsSecureCoding;
-(BOOL)containsPoint:(id)arg0 ;
-(NSInteger)compareByAnglePoint:(id)arg0 andPoint:(id)arg1 withRef:(id)arg2 ;
-(NSUInteger)count;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPoints:(id)arg0 andHull:(id)arg1 ;
-(id)pointAtIndex:(NSUInteger)arg0 ;
-(int)orientationOfPoints:(id)arg0 and:(id)arg1 and:(id)arg2 ;
-(void)addPointToCluster:(id)arg0 ;
-(void)clearCluster;
-(void)computeConvexHull;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sortArray:(id)arg0 ;


@end


#endif