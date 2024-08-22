// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHARTLABELINFO_H
#define CHARTLABELINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ChartLabelInfo : NSObject

@property (readonly, nonatomic) BOOL immutable; // ivar: _immutable
@property (nonatomic) CGFloat position; // ivar: _position
@property (nonatomic) CGSize size; // ivar: _size
@property (retain, nonatomic) NSString *string; // ivar: _string


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)retainStringAndSizeFromLabelInfo:(id)arg0 ;


@end


#endif