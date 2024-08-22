// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNCUIKTRAVELADVISORYDESCRIPTIONGENERATOR_H
#define CALNCUIKTRAVELADVISORYDESCRIPTIONGENERATOR_H

@class NSString;
@protocol CALNTravelAdvisoryDescriptionGenerator;

#import <Foundation/Foundation.h>


@interface CALNCUIKTravelAdvisoryDescriptionGenerator : NSObject <CALNTravelAdvisoryDescriptionGenerator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)travelAdvisoryDescriptionOfType:(NSUInteger)arg0 hypothesis:(id)arg1 location:(id)arg2 ;


@end


#endif