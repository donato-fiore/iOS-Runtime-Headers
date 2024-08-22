// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHANOTIFICATIONOPTIONS_H
#define PHANOTIFICATIONOPTIONS_H

@class NSString, NSDate, PHAsset, NSDictionary;

#import <Foundation/Foundation.h>


@interface PHANotificationOptions : NSObject

@property (retain, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (retain, nonatomic) NSString *collectionUUID; // ivar: _collectionUUID
@property (retain, nonatomic) NSDate *deliveryDate; // ivar: _deliveryDate
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) unsigned char type; // ivar: _type
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)stringFromNotificationType:(unsigned char)arg0 ;
-(id)description;
-(id)initWithType:(unsigned char)arg0 ;


@end


#endif