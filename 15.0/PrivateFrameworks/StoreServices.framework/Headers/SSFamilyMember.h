// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSFAMILYMEMBER_H
#define SSFAMILYMEMBER_H

@class NSString, NSNumber;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSFamilyMember : NSObject <SSXPCCoding>



@property (readonly, nonatomic) BOOL askToBuy; // ivar: _askToBuy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *iCloudAccountName; // ivar: _iCloudAccountName
@property (retain, nonatomic) NSNumber *iCloudIdentifier; // ivar: _iCloudIdentifier
@property (retain, nonatomic) NSNumber *iTunesIdentifier; // ivar: _iTunesIdentifier
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (nonatomic, getter=isMe) BOOL me; // ivar: _me
@property (nonatomic, getter=isSharingPurchases) BOOL sharingPurchases; // ivar: _sharingPurchases
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)newCacheRepresentation;


@end


#endif