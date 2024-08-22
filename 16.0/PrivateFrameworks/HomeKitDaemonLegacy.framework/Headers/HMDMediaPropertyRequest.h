// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAPROPERTYREQUEST_H
#define HMDMEDIAPROPERTYREQUEST_H

@class HMFObject, NSString;


#import "HMDMediaProfile.h"

@interface HMDMediaPropertyRequest : HMFObject

@property (readonly, nonatomic) HMDMediaProfile *mediaProfile; // ivar: _mediaProfile
@property (readonly, nonatomic) id *previousValue; // ivar: _previousValue
@property (readonly, nonatomic) NSString *property; // ivar: _property


+(id)deserializeReadRequests:(id)arg0 mediaProfile:(id)arg1 ;
+(id)requestWithProperty:(id)arg0 mediaProfile:(id)arg1 ;
+(id)serializeReadRequests:(id)arg0 ;
-(id)description;
-(id)initWithProperty:(id)arg0 mediaProfile:(id)arg1 ;


@end


#endif