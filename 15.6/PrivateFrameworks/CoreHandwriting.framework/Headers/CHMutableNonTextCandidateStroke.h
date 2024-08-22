// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHMUTABLENONTEXTCANDIDATESTROKE_H
#define CHMUTABLENONTEXTCANDIDATESTROKE_H

@class NSDictionary;


#import "CHNonTextCandidateStroke.h"

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke

@property (retain, nonatomic) NSDictionary *supportByStrokeIdentifier;


-(BOOL)_adjustSupportForContainerClassificationByAddingStroke:(id)arg0 consistingOfSubstrokes:(id)arg1 ;
-(BOOL)_adjustSupportForLineClassificationByAddingStroke:(id)arg0 consistingOfSubstrokes:(id)arg1 ;
-(BOOL)_removeSupportForStrokeIdentifier:(id)arg0 ;
-(BOOL)adjustSupportByAddingStroke:(id)arg0 consistingOfSubstrokes:(id)arg1 ;
-(BOOL)adjustSupportByRemovingStrokeIdentifier:(id)arg0 ;
-(id)description;
-(void)_setSupportForStrokeIdentifier:(id)arg0 support:(CGFloat)arg1 ;


@end


#endif