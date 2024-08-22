// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMCONFIGURATIONSUBSCRIBERDESCRIPTION_H
#define RMCONFIGURATIONSUBSCRIBERDESCRIPTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface RMConfigurationSubscriberDescription : NSObject

@property (readonly, copy, nonatomic) NSArray *types; // ivar: _types


+(id)descriptionWithEventsDictionary:(id)arg0 ;
+(id)descriptionWithServiceDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTypes:(id)arg0 ;


@end


#endif