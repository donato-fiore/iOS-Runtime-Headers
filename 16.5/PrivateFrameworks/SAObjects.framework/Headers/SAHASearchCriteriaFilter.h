// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAHASEARCHCRITERIAFILTER_H
#define SAHASEARCHCRITERIAFILTER_H

@class NSURL, NSString;


#import "SAHAFilter.h"

@interface SAHASearchCriteriaFilter : SAHAFilter

@property (copy, nonatomic) NSURL *accessoryIdentifier;
@property (copy, nonatomic) NSString *accessoryName;
@property (copy, nonatomic) NSString *attribute;
@property (copy, nonatomic) NSString *entityType;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSURL *homeIdentifier;
@property (copy, nonatomic) NSString *homeName;
@property (copy, nonatomic) NSURL *roomIdentifier;
@property (copy, nonatomic) NSString *roomName;
@property (copy, nonatomic) NSURL *sceneIdentifier;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSURL *serviceGroupIdentifier;
@property (copy, nonatomic) NSURL *serviceIdentifier;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *serviceSubType;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSURL *zoneIdentifier;
@property (copy, nonatomic) NSString *zoneName;


+(id)searchCriteriaFilter;
+(id)searchCriteriaFilterWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif