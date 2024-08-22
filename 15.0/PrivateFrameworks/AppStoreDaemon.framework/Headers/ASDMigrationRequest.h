// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDMIGRATIONREQUEST_H
#define ASDMIGRATIONREQUEST_H



#import "ASDEphemeralRequest.h"
#import "ASDMigrationRequestOptions.h"

@interface ASDMigrationRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDMigrationRequestOptions *options;


+(NSInteger)requestType;
-(id)initWithOptions:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif