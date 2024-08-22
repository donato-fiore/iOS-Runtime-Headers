// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNEWSPLUSLABELCONFIG_H
#define FCNEWSPLUSLABELCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCNewsPlusLabelConfig : NSObject

@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSString *toolTipAlternativeBodyForVoiceOver; // ivar: _toolTipAlternativeBodyForVoiceOver
@property (readonly, nonatomic) NSString *toolTipBody; // ivar: _toolTipBody
@property (readonly, nonatomic) int toolTipDisplayMaxCount; // ivar: _toolTipDisplayMaxCount
@property (readonly, nonatomic) NSInteger toolTipDisplayQuiescenceInterval; // ivar: _toolTipDisplayQuiescenceInterval
@property (readonly, nonatomic) NSString *toolTipTitle; // ivar: _toolTipTitle


-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif