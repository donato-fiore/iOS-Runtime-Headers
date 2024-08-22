// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DMATERIAL_H
#define TSCH3DMATERIAL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCH3DMaterial : NSObject <NSCopying>





+(id)material;
-(BOOL)hasCompleteData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif