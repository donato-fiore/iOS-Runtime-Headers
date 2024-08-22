// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCFRECENCYBASEDEVENT_H
#define DOCFRECENCYBASEDEVENT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface DOCFrecencyBasedEvent : NSObject

@property (nonatomic) CGFloat frecency; // ivar: _frecency
@property (retain, nonatomic) NSDate *lastUsedDate; // ivar: _lastUsedDate


-(CGFloat)frecencyScoreAtDate:(id)arg0 ;
-(void)updateFrecencyAtDate:(id)arg0 ;


@end


#endif