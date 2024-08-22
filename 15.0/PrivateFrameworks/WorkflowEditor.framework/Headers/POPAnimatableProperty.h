// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPANIMATABLEPROPERTY_H
#define POPANIMATABLEPROPERTY_H

@class NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface POPAnimatableProperty : NSObject <NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) id *readBlock;
@property (readonly, nonatomic) CGFloat threshold;
@property (readonly, copy, nonatomic) id *writeBlock;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)propertyWithName:(id)arg0 ;
+(id)propertyWithName:(id)arg0 initializer:(id)arg1 ;
+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif