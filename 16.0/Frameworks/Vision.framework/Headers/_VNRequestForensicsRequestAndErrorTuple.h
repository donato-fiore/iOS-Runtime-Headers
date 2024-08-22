// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _VNREQUESTFORENSICSREQUESTANDERRORTUPLE_H
#define _VNREQUESTFORENSICSREQUESTANDERRORTUPLE_H

@class NSError;

#import <Foundation/Foundation.h>

#import "VNRequest.h"

@interface _VNRequestForensicsRequestAndErrorTuple : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) VNRequest *request; // ivar: _request


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRequest:(id)arg0 error:(id)arg1 ;


@end


#endif