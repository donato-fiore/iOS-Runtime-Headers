// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTKITTEXTPOSITION_H
#define _UITEXTKITTEXTPOSITION_H



#import "UITextPosition.h"

@interface _UITextKitTextPosition : UITextPosition

@property NSInteger affinity; // ivar: _affinity
@property NSInteger offset; // ivar: _offset


+(id)positionWithOffset:(NSInteger)arg0 ;
+(id)positionWithOffset:(NSInteger)arg0 affinity:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif