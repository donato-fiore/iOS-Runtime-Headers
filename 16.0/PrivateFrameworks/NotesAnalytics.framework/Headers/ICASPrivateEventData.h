// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASPRIVATEEVENTDATA_H
#define ICASPRIVATEEVENTDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASSessionDetailType.h"

@interface ICASPrivateEventData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *privateSessionID; // ivar: _privateSessionID
@property (readonly, nonatomic) ICASSessionDetailType *sessionDetailType; // ivar: _sessionDetailType


+(id)dataName;
-(id)initWithPrivateSessionID:(id)arg0 sessionDetailType:(id)arg1 ;
-(id)toDict;


@end


#endif