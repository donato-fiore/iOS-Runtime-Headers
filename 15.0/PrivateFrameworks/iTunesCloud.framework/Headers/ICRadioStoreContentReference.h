// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICRADIOSTORECONTENTREFERENCE_H
#define ICRADIOSTORECONTENTREFERENCE_H

@class NSString, NSNumber;
@protocol ICRadioContentReferenceContainable, NSCopying, NSSecureCoding;


#import "ICRadioContentReference.h"

@interface ICRadioStoreContentReference : ICRadioContentReference <ICRadioContentReferenceContainable, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *containerID; // ivar: _containerID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *storeIdentifier; // ivar: _storeIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoreIdentifier:(id)arg0 ;
-(id)matchDictionary;
-(id)rawContentDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif