// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TURESULTGROUP_H
#define TURESULTGROUP_H

@class NSArray, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TUGroupTitle.h"

@interface TUResultGroup : NSObject <NSCopying>



@property (readonly) NSUInteger groupType;
@property (readonly) NSArray *results;
@property (retain, nonatomic) NSMutableArray *resultsCache; // ivar: _resultsCache
@property (retain, nonatomic) TUGroupTitle *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTitle:(id)arg0 results:(id)arg1 ;
-(void)removeSearchItem:(id)arg0 ;


@end


#endif