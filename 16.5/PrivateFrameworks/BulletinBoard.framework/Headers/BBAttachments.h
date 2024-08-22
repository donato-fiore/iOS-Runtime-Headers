// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBATTACHMENTS_H
#define BBATTACHMENTS_H

@class NSCountedSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BBAttachments : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSCountedSet *additionalAttachments; // ivar: _additionalAttachments
@property (nonatomic) NSInteger primaryType; // ivar: primaryType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAttachments:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfAdditionalAttachments;
-(NSUInteger)numberOfAdditionalAttachmentsOfType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addAttachmentOfType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif