// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKUSERACTIVITYREMINDERSLISTSHAREDINVITATION_H
#define CUIKUSERACTIVITYREMINDERSLISTSHAREDINVITATION_H

@class NSString;


#import "CUIKUserActivityWithSource.h"

@interface CUIKUserActivityRemindersListSharedInvitation : CUIKUserActivityWithSource

@property (readonly, nonatomic) NSString *title; // ivar: _title


-(BOOL)_isMatchForSource:(id)arg0 andTitle:(id)arg1 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSource:(id)arg0 title:(id)arg1 ;


@end


#endif