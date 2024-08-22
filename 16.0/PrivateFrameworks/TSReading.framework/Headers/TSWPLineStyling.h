// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPLINESTYLING_H
#define TSWPLINESTYLING_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSSPropertyMap.h"

@interface TSWPLineStyling : NSObject <NSCopying>



@property (readonly, retain, nonatomic) TSSPropertyMap *additionalCharacterStylePropertyMap; // ivar: _additionalCharacterStylePropertyMap
@property (readonly, nonatomic) NSInteger lineCount; // ivar: _lineCount
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, retain, nonatomic) TSSPropertyMap *overrideCharacterStylePropertyMap; // ivar: _overrideCharacterStylePropertyMap


+(id)lineStylingWithLineCount:(NSInteger)arg0 options:(NSUInteger)arg1 additionalCharacterStylePropertyMap:(id)arg2 overrideCharacterStylePropertyMap:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLineCount:(NSInteger)arg0 options:(NSUInteger)arg1 additionalCharacterStylePropertyMap:(id)arg2 overrideCharacterStylePropertyMap:(id)arg3 ;
-(void)dealloc;


@end


#endif