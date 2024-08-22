// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSOPPORTUNISTICDATA_H
#define IDSOPPORTUNISTICDATA_H

@class NSString, NSData, NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "IDSOpportunisticOptions.h"

@interface IDSOpportunisticData : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accountUniqueID; // ivar: _accountUniqueID
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) IDSOpportunisticOptions *options; // ivar: _options
@property (retain, nonatomic) NSMutableDictionary *sendCount; // ivar: _sendCount
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName


+(BOOL)supportsSecureCoding;
-(BOOL)isInvalid;
-(BOOL)shouldSendToDestination:(id)arg0 ;
-(NSInteger)sendCountForURI:(id)arg0 ;
-(id)copy;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 identifier:(id)arg1 serviceName:(id)arg2 accountUniqueID:(id)arg3 options:(id)arg4 ;
-(id)initWithData:(id)arg0 identifier:(id)arg1 serviceName:(id)arg2 accountUniqueID:(id)arg3 options:(id)arg4 sendCount:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementSendCountForDestination:(id)arg0 ;
-(void)markInvalid;


@end


#endif