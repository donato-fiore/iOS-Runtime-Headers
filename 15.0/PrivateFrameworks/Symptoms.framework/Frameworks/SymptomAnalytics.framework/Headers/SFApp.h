// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAPP_H
#define SFAPP_H

@class NSSet, NSOrderedSet;


#import "Process.h"
#import "SFAppCalendarUsage.h"

@interface SFApp : Process

@property (retain, nonatomic) NSSet *hasAppDomainUsage;
@property (retain, nonatomic) NSSet *hasAppEndpoint;
@property (retain, nonatomic) NSSet *hasAppExperience;
@property (retain, nonatomic) NSSet *hasAppRun;
@property (retain, nonatomic) NSSet *hasCalendarUsage;
@property (retain, nonatomic) NSOrderedSet *hasTypicalUsage;
@property (retain, nonatomic) SFAppCalendarUsage *hintCalendarUsage;


+(id)entityName;
+(id)fetchRequest;
-(void)insertObject:(id)arg0 inHasTypicalUsageAtIndex:(NSUInteger)arg1 ;


@end


#endif