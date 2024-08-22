// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSBAGKEYSET_H
#define AMSBAGKEYSET_H

@class NSMutableDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSBagKeySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *defaultValues; // ivar: _defaultValues


+(BOOL)supportsSecureCoding;
+(id)defaultValueForKey:(id)arg0 profile:(id)arg1 profileVersion:(id)arg2 ;
+(void)registerBagKeySet:(id)arg0 forProfile:(id)arg1 profileVersion:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif