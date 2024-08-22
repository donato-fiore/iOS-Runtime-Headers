// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDUIAPPLICATIONINFO_H
#define DDUIAPPLICATIONINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DDUIApplicationInfo : NSObject

@property (readonly, nonatomic) NSUInteger adamID; // ivar: _adamID
@property (readonly, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, nonatomic) NSString *applicationID; // ivar: _applicationID
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *bundleIDPrefixedServiceIdentifier;
@property (readonly, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier


-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithApplicationID:(id)arg0 serviceIdentifier:(id)arg1 bundleID:(id)arg2 appName:(id)arg3 adamID:(NSUInteger)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif