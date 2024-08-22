// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUILOCATIONROWMODEL_H
#define EKUILOCATIONROWMODEL_H

@class UITableViewCell, EKVirtualConference, EKStructuredLocation;

#import <Foundation/Foundation.h>


@interface EKUILocationRowModel : NSObject

@property (retain, nonatomic) UITableViewCell *cell; // ivar: _cell
@property (retain, nonatomic) EKVirtualConference *conference; // ivar: _conference
@property (retain, nonatomic) EKStructuredLocation *location; // ivar: _location
@property (nonatomic) NSUInteger locationType; // ivar: _locationType


-(id)description;
-(id)initWithConferenceRoom:(id)arg0 ;
-(id)initWithPendingConference:(id)arg0 ;
-(id)initWithStructuredLocation:(id)arg0 ;
-(id)initWithSuggestedLocation:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 location:(id)arg1 conference:(id)arg2 ;
-(id)initWithVirtualConference:(id)arg0 ;


@end


#endif