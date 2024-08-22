// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(BOOL)accountUsesDataSeparatedContainer:(id)arg0 ;
-(id)containerForAccountIdentifier:(id)arg0 ;
-(id)containerInfoForAccountIdentifier:(id)arg0 ;
-(id)containerInfoForPersonaIdentifier:(id)arg0 ;


@end


#endif