// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBIDENTITY_H
#define CBIDENTITY_H

@class NSString, NSUUID, NSData;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface CBIdentity : NSObject <CUXPCCodable>



@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (copy, nonatomic) NSUUID *bluetoothIdentifier; // ivar: _bluetoothIdentifier
@property (copy, nonatomic) NSString *contactID; // ivar: _contactID
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *idsDeviceID; // ivar: _idsDeviceID
@property (copy, nonatomic) NSData *irkData; // ivar: _irkData
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif