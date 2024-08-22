// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALUMCALENDARDATACONTAINERPROVIDER_H
#define CALUMCALENDARDATACONTAINERPROVIDER_H

@class NSString;
@protocol CalCalendarDataContainerProvider;

#import <Foundation/Foundation.h>


@interface CalUMCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_calendarGroupContainer;
-(id)_containerForPersonaIdentifier:(id)arg0 containerProviderBlock:(id)arg1 ;
-(id)containerForPersonaIdentifier:(id)arg0 ;
-(void)_performBlockAsPersonaWithIdentifier:(id)arg0 block:(id)arg1 ;


@end


#endif