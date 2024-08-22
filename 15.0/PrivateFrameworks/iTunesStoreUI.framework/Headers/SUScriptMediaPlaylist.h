// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTMEDIAPLAYLIST_H
#define SUSCRIPTMEDIAPLAYLIST_H

@class MPMediaPlaylist;


#import "SUScriptMediaItemCollection.h"

@interface SUScriptMediaPlaylist : SUScriptMediaItemCollection

@property (readonly, nonatomic) MPMediaPlaylist *nativePlaylist;


+(NSUInteger)nativePlaylistAttributesForScriptPlaylistAttributes:(id)arg0 ;
+(id)scriptPlaylistAttributesForNativePlaylistAttributes:(NSUInteger)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)valueForProperty:(id)arg0 ;


@end


#endif