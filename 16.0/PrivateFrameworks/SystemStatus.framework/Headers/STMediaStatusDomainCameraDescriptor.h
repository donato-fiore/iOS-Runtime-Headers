// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STMEDIASTATUSDOMAINCAMERADESCRIPTOR_H
#define STMEDIASTATUSDOMAINCAMERADESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding, BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface STMediaStatusDomainCameraDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>



@property (readonly, copy, nonatomic) NSString *cameraIdentifier; // ivar: _cameraIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEligibleForPrivacyIndicator) BOOL eligibleForPrivacyIndicator; // ivar: _eligibleForPrivacyIndicator
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCameraIdentifier:(id)arg0 ;
-(id)initWithCameraIdentifier:(id)arg0 eligibleForPrivacyIndicator:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif