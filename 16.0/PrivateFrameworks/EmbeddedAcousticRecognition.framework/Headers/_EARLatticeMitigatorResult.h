// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARLATTICEMITIGATORRESULT_H
#define _EARLATTICEMITIGATORRESULT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EARLatticeMitigatorResult : NSObject <NSCopying>



@property (readonly, nonatomic) float score; // ivar: _score
@property (readonly, nonatomic) float threshold; // ivar: _threshold
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithVersion:(id)arg0 score:(float)arg1 threshold:(float)arg2 ;


@end


#endif