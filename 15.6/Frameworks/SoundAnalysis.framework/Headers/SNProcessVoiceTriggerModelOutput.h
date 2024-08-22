// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNPROCESSVOICETRIGGERMODELOUTPUT_H
#define SNPROCESSVOICETRIGGERMODELOUTPUT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SNProcessVoiceTriggerModelOutput : NSObject

@property (readonly, nonatomic) NSArray *commandFilters; // ivar: _commandFilters


-(id)initWithCommands:(id)arg0 ;
-(id)processNewResults:(id)arg0 timeRange:(struct ? )arg1 ;


@end


#endif