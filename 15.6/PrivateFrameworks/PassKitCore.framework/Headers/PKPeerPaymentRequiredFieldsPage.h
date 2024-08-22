// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTREQUIREDFIELDSPAGE_H
#define PKPEERPAYMENTREQUIREDFIELDSPAGE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentRequiredFieldsPage : NSObject

@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (retain, nonatomic) NSArray *requiredFields; // ivar: _requiredFields


-(id)initWithDictionary:(id)arg0 fieldOptions:(id)arg1 ;


@end


#endif