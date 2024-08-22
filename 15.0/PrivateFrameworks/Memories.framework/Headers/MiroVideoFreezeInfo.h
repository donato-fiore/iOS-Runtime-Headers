// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROVIDEOFREEZEINFO_H
#define MIROVIDEOFREEZEINFO_H

@class NSArray;


#import "MiroFreezeInfo.h"

@interface MiroVideoFreezeInfo : MiroFreezeInfo

@property (retain, nonatomic) NSArray *ranges; // ivar: _ranges


-(BOOL)isAdded;
-(BOOL)isFreeze;
-(BOOL)isRemoved;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)token;


@end


#endif