// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICRADIOLIBRARYALBUMCONTENTREFERENCE_H
#define ICRADIOLIBRARYALBUMCONTENTREFERENCE_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;


#import "ICRadioContentReference.h"

@interface ICRadioLibraryAlbumContentReference : ICRadioContentReference <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *albumName; // ivar: _albumName
@property (copy, nonatomic) NSNumber *representativeCloudIdentifier; // ivar: _representativeCloudIdentifier
@property (copy, nonatomic) NSNumber *storeIdentifier; // ivar: _storeIdentifier


+(BOOL)supportsSecureCoding;
-(NSInteger)contentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)matchDictionary;
-(id)rawContentDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif