// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICRADIOTRACKINFOCONTENTREFERENCE_H
#define ICRADIOTRACKINFOCONTENTREFERENCE_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;


#import "ICRadioStoreContentReference.h"

@interface ICRadioTrackInfoContentReference : ICRadioStoreContentReference <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *trackInfo; // ivar: _trackInfo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoreIdentifier:(id)arg0 trackInfo:(id)arg1 ;
-(id)rawContentDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif