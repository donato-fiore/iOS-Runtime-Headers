// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALMOCKCALENDARDATACONTAINERPROVIDER_H
#define CALMOCKCALENDARDATACONTAINERPROVIDER_H

@class NSURL, NSString;
@protocol CalCalendarDataContainerProvider;

#import <Foundation/Foundation.h>


@interface CalMockCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider>



@property (retain, nonatomic) NSURL *calendarDataContainerURL; // ivar: _calendarDataContainerURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)containerForPersonaIdentifier:(id)arg0 ;


@end


#endif