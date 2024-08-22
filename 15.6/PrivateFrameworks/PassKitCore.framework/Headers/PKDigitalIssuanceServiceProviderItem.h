// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDIGITALISSUANCESERVICEPROVIDERITEM_H
#define PKDIGITALISSUANCESERVICEPROVIDERITEM_H

@class NSDecimalNumber, NSString;
@protocol PKIdentifiable;

#import <Foundation/Foundation.h>


@interface PKDigitalIssuanceServiceProviderItem : NSObject <PKIdentifiable>



@property (readonly, copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unitCount; // ivar: _unitCount


-(id)initWithDictionary:(id)arg0 ;


@end


#endif