// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAACCOUNTEXTERNALIDENTIFICATIONINFO_H
#define DAACCOUNTEXTERNALIDENTIFICATIONINFO_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface DAAccountExternalIdentificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *host; // ivar: _host
@property (readonly, copy, nonatomic) NSArray *ownerAddresses; // ivar: _ownerAddresses
@property (readonly, nonatomic) NSInteger port; // ivar: _port
@property (readonly, copy, nonatomic) NSString *preferredOwnerAddress; // ivar: _preferredOwnerAddress
@property (readonly, nonatomic) BOOL useSSL; // ivar: _useSSL


-(id)initWithHost:(id)arg0 port:(NSInteger)arg1 useSSL:(BOOL)arg2 ownerAddresses:(id)arg3 preferredOwnerAddress:(id)arg4 ;


@end


#endif