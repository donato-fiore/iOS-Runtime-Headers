// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATIDSSERVICECONNECTIONMETADATA_H
#define CATIDSSERVICECONNECTIONMETADATA_H

@class NSUUID, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CATIDSServiceConnectionMetadata : NSObject

@property (readonly, nonatomic) NSUUID *connectionIdentifier; // ivar: _connectionIdentifier
@property (readonly, copy, nonatomic) NSString *destinationAppleID; // ivar: _destinationAppleID
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithConnectionIdentifier:(id)arg0 destinationAppleID:(id)arg1 userInfo:(id)arg2 ;


@end


#endif