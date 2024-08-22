// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASUSERSNAPSHOTITEMDATA_H
#define ICASUSERSNAPSHOTITEMDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASUserSnapshotItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *userID; // ivar: _userID
@property (readonly, nonatomic) NSString *userStorefrontID; // ivar: _userStorefrontID


+(id)dataName;
-(id)initWithUserID:(id)arg0 userStorefrontID:(id)arg1 ;
-(id)toDict;


@end


#endif