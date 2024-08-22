// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHTIMEWINDOWSTROKEGROUP_H
#define CHTIMEWINDOWSTROKEGROUP_H



#import "CHStrokeGroup.h"

@interface CHTimeWindowStrokeGroup : CHStrokeGroup

@property (readonly, nonatomic) CGFloat endTimestamp; // ivar: _endTimestamp
@property (readonly, nonatomic) CGFloat startTimestamp; // ivar: _startTimestamp


-(id)groupByAddingStrokeIdentifiers:(id)arg0 removingStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect )arg4 startTimestamp:(CGFloat)arg5 endTimestamp:(CGFloat)arg6 ;
-(id)initWithStrokeIdentifiers:(id)arg0 firstStrokeIdentifier:(id)arg1 lastStrokeIdentifier:(id)arg2 bounds:(struct CGRect )arg3 startTimestamp:(CGFloat)arg4 endTimestamp:(CGFloat)arg5 ;


@end


#endif