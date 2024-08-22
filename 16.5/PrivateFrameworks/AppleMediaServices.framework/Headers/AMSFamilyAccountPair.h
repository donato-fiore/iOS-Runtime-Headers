// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSFAMILYACCOUNTPAIR_H
#define AMSFAMILYACCOUNTPAIR_H


#import <Foundation/Foundation.h>


@interface AMSFamilyAccountPair : NSObject

@property (readonly, nonatomic) NSUInteger downloaderAccountID; // ivar: _downloaderAccountID
@property (readonly, nonatomic) NSUInteger familyID; // ivar: _familyID
@property (readonly, nonatomic) NSUInteger purchaserAccountID; // ivar: _purchaserAccountID


-(id)initWithDownloaderAccountID:(NSUInteger)arg0 purchaserAccountID:(NSUInteger)arg1 familyID:(NSUInteger)arg2 ;


@end


#endif