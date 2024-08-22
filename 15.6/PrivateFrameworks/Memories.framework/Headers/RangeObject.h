// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RANGEOBJECT_H
#define RANGEOBJECT_H


#import <Foundation/Foundation.h>


@interface RangeObject : NSObject

@property (readonly, nonatomic) ? range; // ivar: _range


+(id)rangeObjectWithRange:(struct ? )arg0 ;
+(id)rangesFromIndexSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(struct ? )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif