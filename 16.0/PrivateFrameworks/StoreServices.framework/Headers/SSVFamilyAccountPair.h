// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVFAMILYACCOUNTPAIR_H
#define SSVFAMILYACCOUNTPAIR_H


#import <Foundation/Foundation.h>


@interface SSVFamilyAccountPair : NSObject

@property (readonly, nonatomic) NSUInteger downloaderAccountIdentifier; // ivar: _downloaderAccountIdentifier
@property (readonly, nonatomic) NSUInteger familyIdentifier; // ivar: _familyIdentifier
@property (readonly, nonatomic) NSUInteger purchaserAccountIdentifier; // ivar: _purchaserAccountIdentifier


-(id)initWithDownloaderAccountIdentifier:(NSUInteger)arg0 purchaserAccountIdentifier:(NSUInteger)arg1 familyIdentifier:(NSUInteger)arg2 ;


@end


#endif