// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSECUREELEMENTPASSFIELD_H
#define PKSECUREELEMENTPASSFIELD_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface PKSecureElementPassField : NSObject

@property (copy, nonatomic) NSSet *foreignReferenceIdentifiers; // ivar: _foreignReferenceIdentifiers
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) NSInteger unitType; // ivar: _unitType


-(id)initWithPassField:(id)arg0 ;
-(id)initWithPaymentPassFieldDictionary:(id)arg0 ;


@end


#endif