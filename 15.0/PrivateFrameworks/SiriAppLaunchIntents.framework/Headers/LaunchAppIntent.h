// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LAUNCHAPPINTENT_H
#define LAUNCHAPPINTENT_H

@class INIntent, NSNumber, NSArray;


#import "Application.h"
#import "InAppSearchCriteria.h"

@interface LaunchAppIntent : INIntent

@property (nonatomic, retain) Application *application;
@property (nonatomic, retain) InAppSearchCriteria *inAppSearch;
@property (nonatomic, retain) NSNumber *isInCarPlay;
@property (nonatomic, retain) NSNumber *isNLv4Parse;
@property (nonatomic, retain) NSNumber *isRemoteExecution;
@property (nonatomic, retain) Application *requestedApplication;
@property (nonatomic, retain) NSNumber *smartSelectApps;
@property (nonatomic, copy) NSArray *suggestedApplications;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif