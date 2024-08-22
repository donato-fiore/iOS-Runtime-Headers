// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAFMFLOCATION_H
#define SAFMFLOCATION_H

@class NSNumber;


#import "SALocation.h"
#import "SAPersonAttribute.h"

@interface SAFmfLocation : SALocation

@property (copy, nonatomic) NSNumber *distance;
@property (retain, nonatomic) SAPersonAttribute *friend;
@property (copy, nonatomic) NSNumber *locationDate;


+(id)location;
+(id)locationWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif