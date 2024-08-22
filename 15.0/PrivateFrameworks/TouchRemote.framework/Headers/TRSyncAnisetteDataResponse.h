// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRSYNCANISETTEDATARESPONSE_H
#define TRSYNCANISETTEDATARESPONSE_H



#import "TRResponseMessage.h"

@interface TRSyncAnisetteDataResponse : TRResponseMessage

@property (nonatomic) BOOL didSucceed; // ivar: _didSucceed


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif