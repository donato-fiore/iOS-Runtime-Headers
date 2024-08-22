// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGDELIVERYKEY_H
#define SGDELIVERYKEY_H

@class NSString;
@protocol SGEntityKey;

#import <Foundation/Foundation.h>


@interface SGDeliveryKey : NSObject <SGEntityKey>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger provider; // ivar: _provider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *trackingNumber; // ivar: _trackingNumber


+(BOOL)isSupportedEntityType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDeliveryKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProvider:(NSUInteger)arg0 trackingNumber:(id)arg1 ;
-(id)initWithSerialized:(id)arg0 ;
-(id)serialize;


@end


#endif