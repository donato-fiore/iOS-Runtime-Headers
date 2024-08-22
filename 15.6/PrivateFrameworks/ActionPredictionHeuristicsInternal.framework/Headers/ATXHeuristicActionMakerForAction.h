// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHEURISTICACTIONMAKERFORACTION_H
#define ATXHEURISTICACTIONMAKERFORACTION_H

@class ATXAction;


#import "ATXHeuristicActionMaker.h"

@interface ATXHeuristicActionMakerForAction : ATXHeuristicActionMaker {
    ATXAction *_action;
}




+(BOOL)supportsSecureCoding;
-(id)_makeAction;
-(id)actionTypeName;
-(id)description;
-(id)initWithAction:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif