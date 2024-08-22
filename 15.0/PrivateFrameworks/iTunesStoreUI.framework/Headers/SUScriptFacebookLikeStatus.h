// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTFACEBOOKLIKESTATUS_H
#define SUSCRIPTFACEBOOKLIKESTATUS_H

@class NSDictionary, NSArray;


#import "SUScriptObject.h"

@interface SUScriptFacebookLikeStatus : SUScriptObject {
    NSDictionary *_dictionary;
}


@property (readonly) NSUInteger friendLikeCount;
@property (readonly) NSArray *friends;
@property (readonly) NSUInteger globalLikeCount;
@property (readonly, getter=isLikedByMe) id *likedByMe;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithLikeStatusDictionary:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif