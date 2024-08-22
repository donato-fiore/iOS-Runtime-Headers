// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMLISTBADGE_H
#define REMLISTBADGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface REMListBadge : NSObject

@property (copy, nonatomic) NSString *emblem; // ivar: emblem
@property (copy, nonatomic) NSString *emoji; // ivar: emoji
@property (readonly, copy, nonatomic) NSString *rawValue;


-(BOOL)_isJSONString:(id)arg0 ;
-(BOOL)_isSingleCharacterEmoji:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_emojiFromRawString:(id)arg0 ;
-(id)initWithEmblem:(id)arg0 ;
-(id)initWithEmoji:(id)arg0 ;
-(id)initWithRawValue:(id)arg0 ;


@end


#endif