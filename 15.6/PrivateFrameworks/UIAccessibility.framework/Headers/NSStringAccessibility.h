// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSTRINGACCESSIBILITY_H
#define NSSTRINGACCESSIBILITY_H

@class super;



@interface NSStringAccessibility : super



+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)lowercaseStringWithLocale:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)stringByReplacingOccurrencesOfString:(id)arg0 withString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange )arg3 ;
-(id)uppercaseStringWithLocale:(id)arg0 ;


@end


#endif