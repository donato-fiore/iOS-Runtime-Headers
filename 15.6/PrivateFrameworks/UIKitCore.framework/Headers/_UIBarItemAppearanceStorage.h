// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBARITEMAPPEARANCESTORAGE_H
#define _UIBARITEMAPPEARANCESTORAGE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UIBarItemAppearanceStorage : NSObject {
    NSMutableDictionary *textAttributesForState;
}




-(id)textAttributeForKey:(id)arg0 state:(NSUInteger)arg1 ;
-(id)textAttributesForState:(NSUInteger)arg0 ;
-(void)enumerateTextAttributesWithBlock:(id)arg0 ;
-(void)setTextAttribute:(id)arg0 forKey:(id)arg1 state:(NSUInteger)arg2 ;
-(void)setTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif