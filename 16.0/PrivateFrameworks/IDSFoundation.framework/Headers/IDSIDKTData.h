// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSIDKTDATA_H
#define IDSIDKTDATA_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSIDKTData : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *verificationRequestID; // ivar: _verificationRequestID


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif