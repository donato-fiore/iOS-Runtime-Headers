// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHHIGHLIGHTCHANGE_H
#define PGGRAPHHIGHLIGHTCHANGE_H

@class NSString;


#import "PGGraphChange.h"

@interface PGGraphHighlightChange : PGGraphChange

@property (readonly, nonatomic) NSString *highlightUUID; // ivar: _highlightUUID
@property (readonly, nonatomic) NSUInteger updateTypes; // ivar: _updateTypes


-(NSUInteger)type;
-(id)description;
-(id)initWithHighlightUUID:(id)arg0 updateTypes:(NSUInteger)arg1 ;
-(void)mergeChange:(id)arg0 ;


@end


#endif