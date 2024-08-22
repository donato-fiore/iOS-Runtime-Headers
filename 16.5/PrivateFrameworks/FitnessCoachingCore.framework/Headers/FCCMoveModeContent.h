// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCMOVEMODECONTENT_H
#define FCCMOVEMODECONTENT_H

@class NSString, NSDate;
@protocol FCCDataSerializable;

#import <Foundation/Foundation.h>


@interface FCCMoveModeContent : NSObject <FCCDataSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger nextActivityMoveMode; // ivar: _nextActivityMoveMode
@property (readonly, nonatomic) NSDate *nextActivityMoveModeStartDate; // ivar: _nextActivityMoveModeStartDate
@property (readonly, nonatomic) NSInteger notificationType; // ivar: _notificationType
@property (readonly) Class superclass;


-(id)initWithNotificationType:(NSInteger)arg0 nextActivityMoveMode:(NSInteger)arg1 nextActivityMoveModeStartDate:(id)arg2 delay:(CGFloat)arg3 ;
-(id)initWithTransportData:(id)arg0 ;
-(id)transportData;


@end


#endif