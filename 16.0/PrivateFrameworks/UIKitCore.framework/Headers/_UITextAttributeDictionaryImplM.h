// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTATTRIBUTEDICTIONARYIMPLM_H
#define _UITEXTATTRIBUTEDICTIONARYIMPLM_H

@class UITextAttributeDictionaryImplI;



@interface _UITextAttributeDictionaryImplM : UITextAttributeDictionaryImplI



+(BOOL)_isMutable;
+(Class)_ignoringClass;
+(Class)_storageClass;
-(void)_removeFallbackFromStorage;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setFallback:(id)arg0 ;
-(void)setIgnoresFallback:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif