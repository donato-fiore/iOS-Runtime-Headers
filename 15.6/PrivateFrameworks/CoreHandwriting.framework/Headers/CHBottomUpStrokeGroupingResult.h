// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHBOTTOMUPSTROKEGROUPINGRESULT_H
#define CHBOTTOMUPSTROKEGROUPINGRESULT_H

@class NSDictionary;


#import "CHStrokeGroupingResult.h"

@interface CHBottomUpStrokeGroupingResult : CHStrokeGroupingResult

@property (readonly, nonatomic) NSDictionary *substrokePlacementsByStrokeIdentifier; // ivar: _substrokePlacementsByStrokeIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStrokeGroups:(id)arg0 createdStrokeGroups:(id)arg1 deletedStrokeGroups:(id)arg2 substrokePlacementsByStrokeIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif