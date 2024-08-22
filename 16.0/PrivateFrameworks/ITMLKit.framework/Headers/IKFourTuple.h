// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKFOURTUPLE_H
#define IKFOURTUPLE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IKFourTuple : NSObject <NSCopying>

 {
    NSInteger _specifiedValueCount;
    CGFloat _values;
}


@property (readonly, nonatomic) IKCornerRadii cornerRadiiValue;
@property (readonly, nonatomic) UIEdgeInsets edgeInsetsValue;
@property (readonly, nonatomic) NSString *namedStyle; // ivar: _namedStyle


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCornerRadii:(struct IKCornerRadii )arg0 ;
-(id)initWithStyleString:(id)arg0 ;


@end


#endif