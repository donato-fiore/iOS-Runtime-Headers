// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLFLOOR_H
#define CLFLOOR_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLFloor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger level; // ivar: level


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLevel:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif