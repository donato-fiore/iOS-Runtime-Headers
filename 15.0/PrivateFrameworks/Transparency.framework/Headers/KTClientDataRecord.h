// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KTCLIENTDATARECORD_H
#define KTCLIENTDATARECORD_H

@class NSDate, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTClientDataRecord : NSObject <NSSecureCoding>



@property (retain) NSDate *addedDate; // ivar: _addedDate
@property NSUInteger applicationVersion; // ivar: _applicationVersion
@property (retain) NSData *clientData; // ivar: _clientData
@property (retain) NSData *clientDataVRFOutput; // ivar: _clientDataVRFOutput
@property (retain) NSDate *deletionEscrowExpiry; // ivar: _deletionEscrowExpiry
@property (retain) NSDate *markedForDeletion; // ivar: _markedForDeletion
@property BOOL verified; // ivar: _verified


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMutation:(id)arg0 ;
-(id)initWithSingleDataRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif