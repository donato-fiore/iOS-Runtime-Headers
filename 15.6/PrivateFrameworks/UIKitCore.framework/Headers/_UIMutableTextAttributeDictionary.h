// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIMUTABLETEXTATTRIBUTEDICTIONARY_H
#define _UIMUTABLETEXTATTRIBUTEDICTIONARY_H

@class NSMutableDictionary;
@protocol _UITextAttributeDefaults;



@interface _UIMutableTextAttributeDictionary : NSMutableDictionary

@property (retain, nonatomic) NSObject<_UITextAttributeDefaults> *fallback;


+(id)alloc;
+(id)new;
-(BOOL)ignoresFallbackForKey:(id)arg0 ;
-(BOOL)usesFallbackForKey:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 fallback:(id)arg1 ;
-(id)initWithFallback:(id)arg0 ;
-(id)sparseDictionary;
-(void)setIgnoresFallback:(BOOL)arg0 forKey:(id)arg1 ;


@end


#endif