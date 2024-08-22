// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef THPREFERREDTHREADNETWORK_H
#define THPREFERREDTHREADNETWORK_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "THThreadNetwork.h"
#import "THNetworkSignature.h"

@interface THPreferredThreadNetwork : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (readonly, nonatomic) THThreadNetwork *network; // ivar: _network
@property (readonly, nonatomic) THNetworkSignature *networkSignature; // ivar: _networkSignature
@property (copy, nonatomic) NSString *userInfo; // ivar: _userInfo


-(id)initWithThreadNetwork:(id)arg0 networkSignature:(id)arg1 creationDate:(id)arg2 lastModificationDate:(id)arg3 userInfo:(id)arg4 ;
-(void)updateUserInfo:(id)arg0 ;


@end


#endif