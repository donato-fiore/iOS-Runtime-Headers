// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALMOCKCALENDARDATACONTAINERPROVIDER_H
#define CALMOCKCALENDARDATACONTAINERPROVIDER_H

@class NSURL, NSDictionary, NSString;
@protocol CalCalendarDataContainerProvider, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CalMockCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider, NSSecureCoding>

 {
    NSURL *_calendarDataContainerURL;
    NSDictionary *_accountsWithSpecificContainers;
    NSDictionary *_personaIDsByContainer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)accountUsesDataSeparatedContainer:(id)arg0 ;
-(id)containerForAccountIdentifier:(id)arg0 ;
-(id)containerInfoForAccountIdentifier:(id)arg0 ;
-(id)containerInfoForPersonaIdentifier:(id)arg0 ;
-(id)initWithAccountDataContainerMap:(id)arg0 defaultDataContainer:(id)arg1 ;
-(id)initWithCalendarDataContainerURL:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)personaForAccountIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif