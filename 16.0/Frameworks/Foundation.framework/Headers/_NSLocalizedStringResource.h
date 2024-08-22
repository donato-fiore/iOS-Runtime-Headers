// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSLOCALIZEDSTRINGRESOURCE_H
#define _NSLOCALIZEDSTRINGRESOURCE_H

@class NSURL, NSLocale;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_NSLocalizedStringResourceSwiftWrapper.h"
#import "NSString.h"

@interface _NSLocalizedStringResource : NSObject <NSCopying, NSSecureCoding>

 {
    _NSLocalizedStringResourceSwiftWrapper *_resource;
}


@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *defaultValue;
@property (readonly, copy) NSString *key;
@property (copy) NSLocale *locale;
@property (readonly, copy) NSString *table;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 defaultValue:(id)arg1 table:(id)arg2 locale:(id)arg3 bundleURL:(id)arg4 ;
-(id)initWithKey:(id)arg0 table:(id)arg1 locale:(id)arg2 bundleURL:(id)arg3 ;
-(id)initWithResource:(id)arg0 ;
-(id)localize;
-(id)localizeWithOptions:(id)arg0 ;
-(id)resource;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif