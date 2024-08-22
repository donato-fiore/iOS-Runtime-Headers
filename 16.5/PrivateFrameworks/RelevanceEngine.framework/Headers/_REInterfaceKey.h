// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REINTERFACEKEY_H
#define _REINTERFACEKEY_H

@class Protocol;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_REInterfaceKey.h"

@interface _REInterfaceKey : NSObject <NSCopying>

 {
    Class _c;
    Protocol *_p;
    BOOL _isClass;
}


@property (retain, nonatomic) Class cls; // ivar: _cls
@property (readonly, nonatomic) BOOL isProtocol;
@property (retain, nonatomic) Protocol *protocol; // ivar: _protocol
@property (readonly, nonatomic) _REInterfaceKey *superclassKey;


-(BOOL)conforms:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClass:(Class)arg0 ;
-(id)initWithProtocol:(id)arg0 ;
-(void)enumerateAutomaticProperties:(id)arg0 ;
-(void)enumerateConformedProperties:(id)arg0 ;
-(void)enumerateExposedMethods:(id)arg0 ;
-(void)enumerateExposedProperties:(id)arg0 ;


@end


#endif