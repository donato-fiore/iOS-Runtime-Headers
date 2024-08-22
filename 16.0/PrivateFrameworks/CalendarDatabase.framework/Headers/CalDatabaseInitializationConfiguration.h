// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDATABASEINITIALIZATIONCONFIGURATION_H
#define CALDATABASEINITIALIZATIONCONFIGURATION_H

@class NSURL;
@protocol CalCalendarDataContainerProvider;

#import <Foundation/Foundation.h>

#import "CDBPreferences.h"

@interface CalDatabaseInitializationConfiguration : NSObject

@property (retain, nonatomic) NSObject<CalCalendarDataContainerProvider> *dataContainerProvider; // ivar: _dataContainerProvider
@property (retain, nonatomic) NSURL *directoryURL; // ivar: _directoryURL
@property (nonatomic) int options; // ivar: _options
@property (retain, nonatomic) CDBPreferences *preferences; // ivar: _preferences


-(id)description;
-(id)initWithDirectoryURL:(id)arg0 ;
-(id)redactedDescription;


@end


#endif