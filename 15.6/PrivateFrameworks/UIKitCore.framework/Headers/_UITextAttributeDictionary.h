// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTATTRIBUTEDICTIONARY_H
#define _UITEXTATTRIBUTEDICTIONARY_H

@class NSDictionary;
@protocol _UITextAttributeDefaults;



@interface _UITextAttributeDictionary : NSDictionary

@property (readonly, nonatomic) NSObject<_UITextAttributeDefaults> *fallback;


+(id)alloc;
+(id)new;
-(BOOL)ignoresFallbackForKey:(id)arg0 ;
-(BOOL)usesFallbackForKey:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 fallback:(id)arg1 ;
-(id)sparseDictionary;


@end


#endif