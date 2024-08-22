// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPDROPCAP_H
#define TSWPDROPCAP_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSSPropertyMap.h"

@interface TSWPDropCap : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger charCount; // ivar: _charCount
@property (readonly, retain, nonatomic) TSSPropertyMap *characterStyleOverridePropertyMap; // ivar: _characterStyleOverridePropertyMap
@property (readonly, retain, nonatomic) NSArray *spacings; // ivar: _spacings


+(id)dropCapWithCharCount:(NSUInteger)arg0 characterStyleOverridePropertyMap:(id)arg1 lineCount:(NSUInteger)arg2 ;
+(id)dropCapWithCharCount:(NSUInteger)arg0 characterStyleOverridePropertyMap:(id)arg1 spacing:(id)arg2 ;
+(id)dropCapWithCharCount:(NSUInteger)arg0 characterStyleOverridePropertyMap:(id)arg1 spacings:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)computedFlagsForSpacing:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCharCount:(NSUInteger)arg0 characterStyleOverridePropertyMap:(id)arg1 spacings:(id)arg2 ;
-(void)dealloc;


@end


#endif