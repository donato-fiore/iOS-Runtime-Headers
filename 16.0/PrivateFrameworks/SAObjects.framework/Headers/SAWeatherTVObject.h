// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAWEATHERTVOBJECT_H
#define SAWEATHERTVOBJECT_H

@class NSString;


#import "SAWeatherAbstractObject.h"

@interface SAWeatherTVObject : SAWeatherAbstractObject

@property (copy, nonatomic) NSString *view;


+(id)tVObject;
+(id)tVObjectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif