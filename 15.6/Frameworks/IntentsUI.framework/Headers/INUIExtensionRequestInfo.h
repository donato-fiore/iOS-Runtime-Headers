// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INUIEXTENSIONREQUESTINFO_H
#define INUIEXTENSIONREQUESTINFO_H

@class INInteraction;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface INUIExtensionRequestInfo : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) INInteraction *interaction; // ivar: _interaction
@property (nonatomic) BOOL requiresUserConsent; // ivar: _requiresUserConsent


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInteraction:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif