// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REMCHANGETRACKINGCLIENTID_H
#define _REMCHANGETRACKINGCLIENTID_H

@class NSString;
@protocol REMChangeTrackingClientIdentifying;

#import <Foundation/Foundation.h>


@interface _REMChangeTrackingClientID : NSObject <REMChangeTrackingClientIdentifying>



@property (readonly, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClientName:(id)arg0 accountIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif