// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMTCONFIGURATIONPRIMITIVE_H
#define DMTCONFIGURATIONPRIMITIVE_H

@class NSString, NSDictionary;
@protocol DMTConfigurationProfilePayload;

#import <Foundation/Foundation.h>


@interface DMTConfigurationPrimitive : NSObject <DMTConfigurationProfilePayload>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *rawDictionary; // ivar: _rawDictionary
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;


@end


#endif