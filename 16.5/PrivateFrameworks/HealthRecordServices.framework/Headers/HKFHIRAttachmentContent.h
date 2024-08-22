// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFHIRATTACHMENTCONTENT_H
#define HKFHIRATTACHMENTCONTENT_H

@class NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKFHIRAttachmentContent : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *content; // ivar: _content
@property (readonly, copy, nonatomic) NSString *contentType; // ivar: _contentType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContent:(id)arg0 contentType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif