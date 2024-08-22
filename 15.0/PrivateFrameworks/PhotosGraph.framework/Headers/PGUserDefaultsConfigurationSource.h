// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGUSERDEFAULTSCONFIGURATIONSOURCE_H
#define PGUSERDEFAULTSCONFIGURATIONSOURCE_H

@class NSString, NSUserDefaults;
@protocol PGConfigurationSource;

#import <Foundation/Foundation.h>


@interface PGUserDefaultsConfigurationSource : NSObject <PGConfigurationSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


-(id)initWithUserDefaults:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;


@end


#endif