// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KTACCOUNT_H
#define KTACCOUNT_H

@class NSData, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTAccount : NSObject <NSSecureCoding>



@property (retain) NSData *accountID; // ivar: _accountID
@property (retain) NSMutableArray *devices; // ivar: _devices


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateWithMutation:(id)arg0 error:(*id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)deviceForDeviceIdVRFOutput:(id)arg0 ;
-(id)initWithAccountId:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMutation:(id)arg0 ;
-(void)addDevicesObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeDevicesObject:(id)arg0 ;


@end


#endif