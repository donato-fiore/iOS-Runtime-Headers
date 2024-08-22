// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTOFFLINEKEYDATA_H
#define MTOFFLINEKEYDATA_H

@class NSManagedObject, NSData, NSString;



@interface MTOfflineKeyData : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) CGFloat expirationDate;
@property (retain, nonatomic) NSString *keyUri;
@property (nonatomic) CGFloat lastRenewedDate;
@property (nonatomic) BOOL pendingDeletion;
@property (nonatomic) NSInteger secureInvalidationDsid;
@property (nonatomic) NSInteger storeTrackId;
@property (retain, nonatomic) NSString *uuid;




@end


#endif