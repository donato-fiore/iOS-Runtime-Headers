// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKCHANGEGROUP_H
#define TSKCHANGEGROUP_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSKChangeGroup : NSObject <NSCopying>



@property (readonly, nonatomic) NSMutableArray *changesArray; // ivar: mChangesArray


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;
-(void)registerChange:(int)arg0 details:(id)arg1 forChangeSource:(id)arg2 ;


@end


#endif