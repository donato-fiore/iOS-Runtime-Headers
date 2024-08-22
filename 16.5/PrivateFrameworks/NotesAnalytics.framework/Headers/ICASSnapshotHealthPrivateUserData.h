// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSNAPSHOTHEALTHPRIVATEUSERDATA_H
#define ICASSNAPSHOTHEALTHPRIVATEUSERDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSnapshotHealthPrivateUserData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *snapshotHealthPrivateUserID; // ivar: _snapshotHealthPrivateUserID


+(id)dataName;
-(id)initWithSnapshotHealthPrivateUserID:(id)arg0 ;
-(id)toDict;


@end


#endif