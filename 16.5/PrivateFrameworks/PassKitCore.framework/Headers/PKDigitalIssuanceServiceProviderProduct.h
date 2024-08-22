// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDIGITALISSUANCESERVICEPROVIDERPRODUCT_H
#define PKDIGITALISSUANCESERVICEPROVIDERPRODUCT_H

@class NSString, NSArray;
@protocol PKIdentifiable;

#import <Foundation/Foundation.h>


@interface PKDigitalIssuanceServiceProviderProduct : NSObject <PKIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (readonly) Class superclass;


-(id)initWithDictionary:(id)arg0 ;


@end


#endif