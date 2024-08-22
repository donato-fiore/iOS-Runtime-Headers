// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUINDEXPATHSET_H
#define PUINDEXPATHSET_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface PUIndexPathSet : NSObject <NSCopying, NSMutableCopying>





-(BOOL)containsIndexPath:(id)arg0 ;
-(NSInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)enumerateIndexPathsUsingBlock:(id)arg0 ;


@end


#endif