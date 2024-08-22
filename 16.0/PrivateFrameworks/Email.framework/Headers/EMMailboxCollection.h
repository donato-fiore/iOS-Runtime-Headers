// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMMAILBOXCOLLECTION_H
#define EMMAILBOXCOLLECTION_H

@protocol NSSecureCoding;


#import "EMCollection.h"
#import "EMMailboxRepository.h"

@interface EMMailboxCollection : EMCollection <NSSecureCoding>



@property (readonly, nonatomic) EMMailboxRepository *repository;


+(BOOL)supportsSecureCoding;
-(id)initWithAccount:(id)arg0 topLevelOnly:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg0 topLevelOnly:(BOOL)arg1 repository:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMailbox:(id)arg0 ;
-(id)initWithMailbox:(id)arg0 repository:(id)arg1 ;
-(id)initWithObjectID:(id)arg0 query:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif