// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSLICE_H
#define SGSLICE_H


#import <Foundation/Foundation.h>


@interface SGSlice : NSObject

@property (readonly, nonatomic) NSUInteger end; // ivar: _end
@property (readonly, nonatomic) _NSRange range;
@property (readonly, nonatomic) NSUInteger start; // ivar: _start
@property (readonly, nonatomic) ? type; // ivar: _type


+(id)sliceWithType:(struct ? )arg0 range:(struct _NSRange )arg1 ;
+(id)sliceWithType:(struct ? )arg0 start:(NSUInteger)arg1 end:(NSUInteger)arg2 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithType:(struct ? )arg0 range:(struct _NSRange )arg1 ;
-(id)initWithType:(struct ? )arg0 start:(NSUInteger)arg1 end:(NSUInteger)arg2 ;


@end


#endif