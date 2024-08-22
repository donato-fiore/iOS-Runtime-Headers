// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOKOBJECT_H
#define IOKOBJECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IOKObject : NSObject

@property (readonly, copy, nonatomic) NSString *ioClassName;
@property (readonly, nonatomic) unsigned int object; // ivar: _object


+(Class)classForRegistryEntry:(unsigned int)arg0 ;
+(id)bundleIdentifierForClassName:(id)arg0 ;
+(id)ioSuperClassNameForClassName:(id)arg0 ;
-(BOOL)conformsToIOClassName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithIOObject:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif