// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARMANAGEDRECORD_H
#define AVTAVATARMANAGEDRECORD_H

@class NSManagedObject, NSData, NSUUID, NSDate;



@interface AVTAvatarManagedRecord : NSManagedObject

@property (retain, nonatomic) NSData *avatarData;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSDate *orderDate;




@end


#endif