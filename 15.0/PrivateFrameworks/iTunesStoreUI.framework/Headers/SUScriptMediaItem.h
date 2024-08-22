// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTMEDIAITEM_H
#define SUSCRIPTMEDIAITEM_H

@class MPMediaItem;


#import "SUScriptObject.h"

@interface SUScriptMediaItem : SUScriptObject

@property (readonly, nonatomic) MPMediaItem *nativeItem;


+(NSUInteger)nativeMediaTypesForScriptMediaTypes:(id)arg0 ;
+(id)copyScriptMediaTypesForNativeMediaTypes:(NSUInteger)arg0 ;
+(id)scriptMediaTypeForNativeMediaType:(NSUInteger)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)imageURLWithWidth:(id)arg0 height:(id)arg1 ;
-(id)valueForProperty:(id)arg0 ;


@end


#endif