// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTANIMOJIDESCRIPTOR_H
#define AVTANIMOJIDESCRIPTOR_H

@class NSString;


#import "AVTAvatarDescriptor.h"

@interface AVTAnimojiDescriptor : AVTAvatarDescriptor

@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(unsigned char)classIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAnimoji:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(void)encodeInDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif