// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRERASEANISETTEDATARESPONSE_H
#define TRERASEANISETTEDATARESPONSE_H



#import "TRResponseMessage.h"

@interface TREraseAnisetteDataResponse : TRResponseMessage

@property (nonatomic) BOOL didSucceed; // ivar: _didSucceed


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif