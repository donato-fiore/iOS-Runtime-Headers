// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAFILTER_H
#define CAFILTER_H

@class NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    unsigned int _type;
    NSString *_name;
    unsigned int _flags;
    *void _attr;
    *void _cache;
}


@property (getter=isAccessibility) BOOL accessibility;
@property BOOL cachesInputImage;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *name;
@property (readonly) NSString *type;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)filterTypes;
+(id)filterWithName:(id)arg0 ;
+(id)filterWithType:(id)arg0 ;
+(void)CAMLParserStartElement:(id)arg0 ;
-(BOOL)enabled;
-(id)CAMLTypeForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithType:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(struct Object *)CA_copyRenderValue;
-(void)CAMLParser:(id)arg0 setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDefaults;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif