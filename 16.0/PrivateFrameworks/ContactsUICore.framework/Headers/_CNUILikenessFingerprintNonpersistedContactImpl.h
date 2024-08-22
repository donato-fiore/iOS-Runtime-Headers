// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNUILIKENESSFINGERPRINTNONPERSISTEDCONTACTIMPL_H
#define _CNUILIKENESSFINGERPRINTNONPERSISTEDCONTACTIMPL_H

@class NSString, NSArray, NSValue;
@protocol _CNUILikenessFingerprintImpl;

#import <Foundation/Foundation.h>


@interface _CNUILikenessFingerprintNonpersistedContactImpl : NSObject <_CNUILikenessFingerprintImpl>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, copy) NSString *familyName; // ivar: _familyName
@property (readonly, copy) NSString *givenName; // ivar: _givenName
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSValue *imageDataPointer; // ivar: _imageDataPointer
@property (readonly, copy) NSString *middleName; // ivar: _middleName
@property (readonly, copy) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (readonly) Class superclass;
@property (readonly, copy) NSValue *thumbnailImageDataPointer; // ivar: _thumbnailImageDataPointer


-(BOOL)hasContactIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithContact:(id)arg0 ;
-(id)initWithGivenName:(id)arg0 middleName:(id)arg1 familyName:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 imageData:(id)arg5 thumbnailImageData:(id)arg6 ;


@end


#endif