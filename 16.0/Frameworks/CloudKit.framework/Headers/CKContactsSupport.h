// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCONTACTSSUPPORT_H
#define CKCONTACTSSUPPORT_H


#import <Foundation/Foundation.h>


@interface CKContactsSupport : NSObject

@property (readonly, nonatomic) Class CKCNContact;
@property (readonly, nonatomic) Class CKCNContactFetchRequest;
@property (readonly, nonatomic) Class CKCNContactStore;
@property (readonly, nonatomic) Class CKCNMutableContact;
@property (readonly, nonatomic) Class CKCNPhoneNumber;


+(id)sharedInstance;


@end


#endif