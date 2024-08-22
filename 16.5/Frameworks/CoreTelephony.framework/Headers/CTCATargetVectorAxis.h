// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCATARGETVECTORAXIS_H
#define CTCATARGETVECTORAXIS_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCATargetVectorAxis : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *offset; // ivar: _offset
@property (retain, nonatomic) NSNumber *range; // ivar: _range


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif