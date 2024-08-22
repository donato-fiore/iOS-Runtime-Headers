// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDELEGATIONPLAYINFOTOKENREQUEST_H
#define ICDELEGATIONPLAYINFOTOKENREQUEST_H

@class NSNumber, NSData, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICDelegationPlayInfoTokenRequest : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *DSID; // ivar: _DSID
@property (copy, nonatomic) NSData *SICData; // ivar: _SICData
@property (copy, nonatomic) NSData *cloudCredentialsTokenData; // ivar: _cloudCredentialsTokenData
@property (readonly, copy, nonatomic) NSMutableDictionary *propertyListRepresentation;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDSID:(id)arg0 SICData:(id)arg1 ;


@end


#endif