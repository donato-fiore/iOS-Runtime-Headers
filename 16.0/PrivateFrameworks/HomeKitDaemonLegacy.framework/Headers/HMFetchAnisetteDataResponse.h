// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFETCHANISETTEDATARESPONSE_H
#define HMFETCHANISETTEDATARESPONSE_H

@class AKAnisetteData, NSString, NSDictionary;
@protocol HMRemoteLoginMessageProtocol;


#import "HMRemoteLoginMessage.h"

@interface HMFetchAnisetteDataResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol>



@property (copy, nonatomic) AKAnisetteData *anisetteData; // ivar: _anisetteData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *messageName;
@property (readonly, nonatomic) NSDictionary *messagePayload;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *xpcMessageName;


+(BOOL)supportsSecureCoding;
+(id)objWithDict:(id)arg0 ;
+(id)objWithMessage:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif