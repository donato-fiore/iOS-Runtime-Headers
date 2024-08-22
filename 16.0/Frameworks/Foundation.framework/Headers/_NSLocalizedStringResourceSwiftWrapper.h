// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSLOCALIZEDSTRINGRESOURCESWIFTWRAPPER_H
#define _NSLOCALIZEDSTRINGRESOURCESWIFTWRAPPER_H

@class NSURL, NSLocale;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSLocalizedStringResourceSwiftWrapper : NSObject <NSCopying, NSSecureCoding>

 {
    ? wrapped;
}


@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *defaultValue;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, readonly) NSString *table;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 defaultValue:(id)arg1 table:(id)arg2 locale:(id)arg3 bundleURL:(id)arg4 ;
-(id)localize;
-(id)localizeWithOptions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif