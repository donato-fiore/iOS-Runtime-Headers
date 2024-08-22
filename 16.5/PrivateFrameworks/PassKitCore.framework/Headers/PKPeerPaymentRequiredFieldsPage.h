// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTREQUIREDFIELDSPAGE_H
#define PKPEERPAYMENTREQUIREDFIELDSPAGE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentRequiredFieldsPage : NSObject

@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (copy, nonatomic) NSString *requestToken; // ivar: _requestToken
@property (retain, nonatomic) NSArray *requiredFields; // ivar: _requiredFields
@property (copy, nonatomic) NSString *status; // ivar: _status


-(id)initWithDictionary:(id)arg0 fieldOptions:(id)arg1 ;


@end


#endif