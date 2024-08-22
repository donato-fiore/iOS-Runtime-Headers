// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCOMPLICATIONSSUGGESTION_H
#define ATXCOMPLICATIONSSUGGESTION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXComplication.h"

@interface ATXComplicationsSuggestion : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *complications; // ivar: _complications
@property (readonly, nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (readonly, copy, nonatomic) ATXComplication *subtitleComplication; // ivar: _subtitleComplication


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubtitleComplication:(id)arg0 layoutType:(NSInteger)arg1 complications:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif