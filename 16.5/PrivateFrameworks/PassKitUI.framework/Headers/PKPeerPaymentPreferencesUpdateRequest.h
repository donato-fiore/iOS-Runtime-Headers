// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTPREFERENCESUPDATEREQUEST_H
#define PKPEERPAYMENTPREFERENCESUPDATEREQUEST_H

@class NSSet, PKPeerPaymentPreferences;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentPreferencesUpdateRequest : NSObject

@property (readonly, copy, nonatomic) NSSet *sections; // ivar: _sections
@property (readonly, nonatomic) PKPeerPaymentPreferences *updatedPreferences; // ivar: _updatedPreferences


-(id)description;
-(id)initWithUpdatedPreferences:(id)arg0 section:(NSInteger)arg1 ;
-(void)coalesceWithRequest:(id)arg0 ;


@end


#endif