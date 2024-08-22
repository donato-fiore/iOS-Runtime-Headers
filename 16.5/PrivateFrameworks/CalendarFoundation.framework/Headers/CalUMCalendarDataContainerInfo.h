// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALUMCALENDARDATACONTAINERINFO_H
#define CALUMCALENDARDATACONTAINERINFO_H

@class NSString, NSURL;
@protocol CalCalendarDataContainerInfo;

#import <Foundation/Foundation.h>


@interface CalUMCalendarDataContainerInfo : NSObject <CalCalendarDataContainerInfo>



@property (readonly, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSURL *containerURL; // ivar: _containerURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *personaID; // ivar: _personaID
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesDataSeparatedContainer; // ivar: _usesDataSeparatedContainer


+(id)_calendarGroupContainer;
-(id)initWithAccountID:(id)arg0 ;
-(id)initWithPersonaID:(id)arg0 ;


@end


#endif