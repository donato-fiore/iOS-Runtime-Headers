// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWPROPERTYINFO_H
#define _UIVIEWPROPERTYINFO_H

@protocol NSCopying, UIVectorOperatable;

#import <Foundation/Foundation.h>


@interface _UIViewPropertyInfo : NSObject <NSCopying>



@property (retain, nonatomic) NSObject<UIVectorOperatable> *previousValue; // ivar: _previousValue
@property (retain, nonatomic) NSObject<UIVectorOperatable> *value; // ivar: _value


+(id)viewPropertyInfoWithValue:(id)arg0 previousValue:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif