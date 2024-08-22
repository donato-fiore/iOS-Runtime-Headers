// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRLEGACYANISETTEDATAREQUEST_H
#define TRLEGACYANISETTEDATAREQUEST_H

@class NSString;


#import "TRRequestMessage.h"

@interface TRLegacyAnisetteDataRequest : TRRequestMessage

@property (copy, nonatomic) NSString *dsid; // ivar: _dsid


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif