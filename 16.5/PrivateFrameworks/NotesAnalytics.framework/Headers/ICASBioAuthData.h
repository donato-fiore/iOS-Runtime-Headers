// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASBIOAUTHDATA_H
#define ICASBIOAUTHDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASBioAuthType.h"

@interface ICASBioAuthData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASBioAuthType *bioAuthType; // ivar: _bioAuthType


+(id)dataName;
-(id)initWithBioAuthType:(id)arg0 ;
-(id)toDict;


@end


#endif