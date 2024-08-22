// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLDHIGHLIGHTPILLIDENTIFIER_H
#define SLDHIGHLIGHTPILLIDENTIFIER_H

@class UISSlotStyle;

#import <Foundation/Foundation.h>

#import "SLDPillSlotTag.h"

@interface SLDHighlightPillIdentifier : NSObject

@property (retain, nonatomic) UISSlotStyle *style; // ivar: _style
@property (retain, nonatomic) SLDPillSlotTag *tag; // ivar: _tag


+(id)identifierForStyle:(id)arg0 tag:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithStyle:(id)arg0 tag:(id)arg1 ;


@end


#endif