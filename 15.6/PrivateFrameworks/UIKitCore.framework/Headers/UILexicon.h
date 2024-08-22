// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UILEXICON_H
#define UILEXICON_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UILexicon : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *entries; // ivar: _entries


+(id)_lexiconWithTILexicon:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif