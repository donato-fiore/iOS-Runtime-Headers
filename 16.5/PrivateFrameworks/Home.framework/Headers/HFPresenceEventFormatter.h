// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFPRESENCEEVENTFORMATTER_H
#define HFPRESENCEEVENTFORMATTER_H

@class NSFormatter, HMHome;


#import "HFTriggerNaturalLanguageOptions.h"

@interface HFPresenceEventFormatter : NSFormatter

@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger nameType; // ivar: _nameType
@property (weak, nonatomic) HFTriggerNaturalLanguageOptions *options; // ivar: _options
@property (nonatomic) NSUInteger style; // ivar: _style


-(id)_formattedListForSelectedUsers:(id)arg0 inHome:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(id)stringForPresenceEvent:(id)arg0 ;
-(id)stringForPresenceEventBuilder:(id)arg0 ;
-(id)stringForPresenceEventBuilder:(id)arg0 actionsDescription:(id)arg1 ;


@end


#endif