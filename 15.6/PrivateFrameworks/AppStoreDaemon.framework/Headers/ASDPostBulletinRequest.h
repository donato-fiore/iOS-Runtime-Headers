// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDPOSTBULLETINREQUEST_H
#define ASDPOSTBULLETINREQUEST_H



#import "ASDEphemeralRequest.h"
#import "ASDPostBulletinRequestOptions.h"

@interface ASDPostBulletinRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPostBulletinRequestOptions *options;


+(NSInteger)requestType;
-(id)initWithOptions:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif