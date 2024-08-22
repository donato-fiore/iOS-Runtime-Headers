// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASINTERNALUSERDATA_H
#define ICASINTERNALUSERDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASInternalUserData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *rawUserDSID; // ivar: _rawUserDSID


+(id)dataName;
-(id)initWithRawUserDSID:(id)arg0 ;
-(id)toDict;


@end


#endif