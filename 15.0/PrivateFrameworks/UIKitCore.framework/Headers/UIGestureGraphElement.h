// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIGESTUREGRAPHELEMENT_H
#define UIGESTUREGRAPHELEMENT_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface UIGestureGraphElement : NSObject {
    NSMutableDictionary *_properties;
}


@property (readonly, copy, nonatomic) NSString *label; // ivar: _label


-(BOOL)hasProperties:(id)arg0 ;
-(id)description;
-(id)initWithLabel:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)propertyForKey:(id)arg0 ;
-(void)enumeratePropertiesUsingBlock:(id)arg0 ;
-(void)removeAllProperties;
-(void)removePropertyForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setProperties:(id)arg0 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;


@end


#endif