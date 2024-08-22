// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKENTITY_H
#define GKENTITY_H

@class NSMutableDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GKEntity : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_components;
}


@property (readonly, retain, nonatomic) NSArray *components;


+(BOOL)supportsSecureCoding;
+(id)entity;
-(id)componentForClass:(Class)arg0 ;
-(id)componentForKey:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addComponent:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeComponent:(id)arg0 ;
-(void)removeComponentForClass:(Class)arg0 ;
-(void)updateWithDeltaTime:(CGFloat)arg0 ;


@end


#endif