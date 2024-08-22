// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARDESCRIPTOR_H
#define AVTAVATARDESCRIPTOR_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVTAvatarDescriptor : NSObject <NSCopying, NSSecureCoding>





+(BOOL)canLoadDataRepresentation:(id)arg0 ;
+(BOOL)canLoadDataRepresentationWithVersion:(unsigned short)arg0 minimumCompatibleVersion:(unsigned short)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)avatarDictionaryFromDataRepresentation:(id)arg0 error:(*id)arg1 ;
+(id)descriptorWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
+(id)descriptorWithURL:(id)arg0 error:(*id)arg1 ;
+(unsigned char)classIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)encodeInDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif