// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUREQUESTID_H
#define SIRINLUREQUESTID_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SIRINLURequestID : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *connectionID; // ivar: _connectionID
@property (retain, nonatomic) NSString *idAsString; // ivar: _idAsString
@property (retain, nonatomic) NSUUID *nluRequestId; // ivar: _nluRequestId


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdAsString:(id)arg0 connectionID:(id)arg1 ;
-(id)initWithIdAsString:(id)arg0 nluRequestId:(id)arg1 connectionID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif