// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXJSONCOMPONENTANCHOR_H
#define SXJSONCOMPONENTANCHOR_H

@class NSString;
@protocol SXComponentAnchor;


#import "SXJSONObject.h"

@interface SXJSONComponentAnchor : SXJSONObject <SXComponentAnchor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger originAnchorPosition;
@property (readonly, nonatomic) _NSRange range;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger targetAnchorPosition;
@property (readonly, nonatomic) NSString *targetComponentIdentifier;


-(NSInteger)anchorAlignmentForString:(id)arg0 ;
-(NSInteger)originAnchorPositionWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)targetAnchorPositionWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif