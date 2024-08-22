// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GOOGLECALDAVSERVERVERSION_H
#define GOOGLECALDAVSERVERVERSION_H



#import "CalDAVConcreteServerVersion.h"

@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion



-(BOOL)requiresOpeningAttachmentAsLink;
-(BOOL)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
-(id)init;
-(id)supportedCalendarComponentSets;
-(id)type;


@end


#endif