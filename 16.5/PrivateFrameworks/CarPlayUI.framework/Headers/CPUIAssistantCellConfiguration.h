// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPUIASSISTANTCELLCONFIGURATION_H
#define CPUIASSISTANTCELLCONFIGURATION_H

@class NSString;
@protocol CPUIAssistantCellConfigurationProtocol;

#import <Foundation/Foundation.h>


@interface CPUIAssistantCellConfiguration : NSObject <CPUIAssistantCellConfigurationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text


+(id)configurationWithText:(id)arg0 ;


@end


#endif