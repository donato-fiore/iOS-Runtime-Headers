// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCDISPLAYCONTEXT_H
#define PCDISPLAYCONTEXT_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PCDisplayContext : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger interactionBehavior; // ivar: _interactionBehavior
@property (nonatomic) NSInteger interactionDirection; // ivar: _interactionDirection
@property (copy, nonatomic) NSURL *legacyAttachmentURL; // ivar: _legacyAttachmentURL
@property (copy, nonatomic) NSString *legacyBodyText; // ivar: _legacyBodyText
@property (copy, nonatomic) NSString *localizedPrimaryAltText; // ivar: _localizedPrimaryAltText
@property (copy, nonatomic) NSString *localizedSecondaryAltText; // ivar: _localizedSecondaryAltText


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif