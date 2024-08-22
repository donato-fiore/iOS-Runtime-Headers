// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROPHOTOFREEZEINFO_H
#define MIROPHOTOFREEZEINFO_H



#import "MiroFreezeInfo.h"

@interface MiroPhotoFreezeInfo : MiroFreezeInfo

@property (nonatomic) BOOL added; // ivar: _added
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL iris; // ivar: _iris
@property (nonatomic) BOOL removed; // ivar: _removed
@property (nonatomic) BOOL used; // ivar: _used


-(BOOL)isAdded;
-(BOOL)isFreeze;
-(BOOL)isRemoved;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)description;
-(id)initWithData:(id)arg0 ;


@end


#endif