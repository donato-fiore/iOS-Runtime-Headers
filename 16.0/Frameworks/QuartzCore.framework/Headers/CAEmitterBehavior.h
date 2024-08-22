// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAEMITTERBEHAVIOR_H
#define CAEMITTERBEHAVIOR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CAEmitterBehavior : NSObject <NSSecureCoding>

 {
    unsigned int _type;
    NSString *_name;
    *void _attr;
    *void _cache;
    unsigned int _flags;
}


@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *name;
@property (readonly) NSString *type;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)behaviorTypes;
+(id)behaviorWithType:(id)arg0 ;
+(void)CAMLParserStartElement:(id)arg0 ;
-(id)CAMLTypeForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(struct Object *)CA_copyRenderValue;
-(void)CAMLParser:(id)arg0 setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 ;


@end


#endif