// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSRECEIVEDINVITATION_H
#define IDSRECEIVEDINVITATION_H

@class NSString;
@protocol NSSecureCoding;


#import "IDSInvitation.h"

@interface IDSReceivedInvitation : IDSInvitation <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *fromID; // ivar: _fromID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithfromID:(id)arg0 state:(NSInteger)arg1 expirationDate:(id)arg2 uniqueID:(id)arg3 context:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setContext:(id)arg0 ;
-(void)setSenderMergeID:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;


@end


#endif