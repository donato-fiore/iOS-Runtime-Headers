// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMFSNODE_H
#define MCMFSNODE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MCMFSNode : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger ctime; // ivar: _ctime
@property (readonly, nonatomic) int device; // ivar: _device
@property (readonly, nonatomic) NSUInteger inode; // ivar: _inode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFSNode:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithINode:(NSUInteger)arg0 device:(int)arg1 ctime:(NSInteger)arg2 ;
-(id)initWithStat:(struct stat *)arg0 ;


@end


#endif