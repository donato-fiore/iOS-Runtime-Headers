// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUPAIREDPEER_H
#define CUPAIREDPEER_H

@class NSDictionary, NSData, NSDate, NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CUPairedPeer : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *acl; // ivar: _acl
@property (copy, nonatomic) NSData *altIRK; // ivar: _altIRK
@property (copy, nonatomic) NSDate *dateModified; // ivar: _dateModified
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *identifierStr; // ivar: _identifierStr
@property (copy, nonatomic) NSDictionary *info; // ivar: _info
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSData *publicKey; // ivar: _publicKey


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)detailedDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif