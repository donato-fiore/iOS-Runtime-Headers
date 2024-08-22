// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOMMANDIDENTIFIERDICTIONARY_H
#define _UICOMMANDIDENTIFIERDICTIONARY_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_UISelectorDictionary.h"

@interface _UICommandIdentifierDictionary : NSObject <NSCopying>

 {
    _UISelectorDictionary *_actionDictionary;
    NSMutableDictionary *_actionPropertyListDictionary;
}




-(BOOL)intersectsEntriesFromDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)intersectingIdentifiersFromDictionary:(id)arg0 ;
-(id)objectForAction:(SEL)arg0 propertyList:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)removeEntriesFromDictionary:(id)arg0 ;
-(void)removeObjectForAction:(SEL)arg0 propertyList:(id)arg1 ;
-(void)setObject:(id)arg0 forAction:(SEL)arg1 propertyList:(id)arg2 ;


@end


#endif