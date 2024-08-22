// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALMOCKCALENDARDATACONTAINERINFO_H
#define CALMOCKCALENDARDATACONTAINERINFO_H

@class NSString, NSURL;
@protocol CalCalendarDataContainerInfo;

#import <Foundation/Foundation.h>


@interface CalMockCalendarDataContainerInfo : NSObject <CalCalendarDataContainerInfo>



@property (retain, nonatomic) NSString *accountID; // ivar: _accountID
@property (retain, nonatomic) NSURL *containerURL; // ivar: _containerURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *personaID; // ivar: _personaID
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesDataSeparatedContainer; // ivar: _usesDataSeparatedContainer




@end


#endif