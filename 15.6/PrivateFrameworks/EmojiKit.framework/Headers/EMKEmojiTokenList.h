// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMKEMOJITOKENLIST_H
#define EMKEMOJITOKENLIST_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EMKEmojiTokenList : NSObject <NSCopying>

 {
    NSArray *_emojiTokenArray;
}


@property (readonly) NSUInteger count;
@property (readonly) NSArray *emojiTokenArray;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)emojiTokenAtIndex:(NSUInteger)arg0 ;
-(id)initWithEmojiTokenArray:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif