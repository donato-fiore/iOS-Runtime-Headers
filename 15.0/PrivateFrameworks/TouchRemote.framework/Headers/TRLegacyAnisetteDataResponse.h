// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRLEGACYANISETTEDATARESPONSE_H
#define TRLEGACYANISETTEDATARESPONSE_H

@class AKAnisetteData;


#import "TRResponseMessage.h"

@interface TRLegacyAnisetteDataResponse : TRResponseMessage

@property (copy, nonatomic) AKAnisetteData *anisetteData; // ivar: _anisetteData


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif