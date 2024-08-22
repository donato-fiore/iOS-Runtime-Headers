// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMSTORECONFIGURATIONSUBSCRIBERDESCRIPTION_H
#define RMSTORECONFIGURATIONSUBSCRIBERDESCRIPTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface RMStoreConfigurationSubscriberDescription : NSObject

@property (readonly, copy, nonatomic) NSString *principalClassName; // ivar: _principalClassName
@property (readonly, copy, nonatomic) NSArray *types; // ivar: _types


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTypes:(id)arg0 principalClassName:(id)arg1 ;


@end


#endif