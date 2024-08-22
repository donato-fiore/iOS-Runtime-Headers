// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXSTACKSTATE_H
#define ATXSTACKSTATE_H

@class NSDate, ATXHomeScreenEvent, ATXSuggestionLayout;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXStackState : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *dateOfLastStalenessRotation; // ivar: _dateOfLastStalenessRotation
@property (retain, nonatomic) ATXHomeScreenEvent *lastStackRotationEvent; // ivar: _lastStackRotationEvent
@property (retain, nonatomic) ATXHomeScreenEvent *lastStackShownEvent; // ivar: _lastStackShownEvent
@property (retain, nonatomic) ATXHomeScreenEvent *lastUserScrollStackRotationEvent; // ivar: _lastUserScrollStackRotationEvent
@property (retain, nonatomic) ATXSuggestionLayout *layoutForLastStalenessRotation; // ivar: _layoutForLastStalenessRotation
@property (retain, nonatomic) ATXHomeScreenEvent *stackCreationEvent; // ivar: _stackCreationEvent


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif