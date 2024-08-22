// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIWEBFORMDELEGATEEDITEDFORMSMAP_H
#define _UIWEBFORMDELEGATEEDITEDFORMSMAP_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _UIWebFormDelegateEditedFormsMap : NSObject {
    NSMutableDictionary *_map;
    NSMutableArray *_lifetimeHelper;
}




-(id)_keyForWebFrame:(id)arg0 ;
-(id)allValues;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif