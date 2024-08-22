// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFANALYTICSSCENEICONEDITEVENT_H
#define HFANALYTICSSCENEICONEDITEVENT_H

@class NSString, NSNumber;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsSceneIconEditEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *colorStr; // ivar: _colorStr
@property (retain, nonatomic) NSNumber *didChange; // ivar: _didChange
@property (retain, nonatomic) NSNumber *isNewScene; // ivar: _isNewScene
@property (retain, nonatomic) NSString *sfSymbolStr; // ivar: _sfSymbolStr


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif