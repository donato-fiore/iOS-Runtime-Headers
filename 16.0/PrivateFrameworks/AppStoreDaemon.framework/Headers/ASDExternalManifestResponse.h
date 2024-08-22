// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDEXTERNALMANIFESTRESPONSE_H
#define ASDEXTERNALMANIFESTRESPONSE_H

@class NSError, NSArray;


#import "ASDRequestResponse.h"

@interface ASDExternalManifestResponse : ASDRequestResponse

@property (copy) NSError *error;
@property (readonly, nonatomic) NSArray *results; // ivar: _results
@property BOOL success;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResults:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif