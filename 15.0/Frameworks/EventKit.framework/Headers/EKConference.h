// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCONFERENCE_H
#define EKCONFERENCE_H

@class NSString, NSURL;


#import "EKObject.h"

@interface EKConference : EKObject

@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSURL *url;


+(Class)frozenClass;
+(id)knownIdentityKeysForComparison;
-(id)description;
-(id)initWithInfo:(id)arg0 url:(id)arg1 ;


@end


#endif