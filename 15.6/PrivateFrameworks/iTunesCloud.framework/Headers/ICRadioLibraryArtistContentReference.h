// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICRADIOLIBRARYARTISTCONTENTREFERENCE_H
#define ICRADIOLIBRARYARTISTCONTENTREFERENCE_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;


#import "ICRadioContentReference.h"

@interface ICRadioLibraryArtistContentReference : ICRadioContentReference <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (copy, nonatomic) NSNumber *representativeCloudIdentifier; // ivar: _representativeCloudIdentifier
@property (copy, nonatomic) NSNumber *storeIdentifier; // ivar: _storeIdentifier


+(BOOL)supportsSecureCoding;
-(NSInteger)contentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)matchDictionaryWithSubscriptionStatus:(id)arg0 ;
-(id)rawContentDictionaryWithSubscriptionStatus:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif