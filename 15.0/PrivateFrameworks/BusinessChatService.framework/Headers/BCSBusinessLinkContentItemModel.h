// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSBUSINESSLINKCONTENTITEMMODEL_H
#define BCSBUSINESSLINKCONTENTITEMMODEL_H

@class NSString;
@protocol BSDescriptionProviding, BCSBusinessLinkContentItemDescribing, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCSBusinessLinkContentItemModel : NSObject <BSDescriptionProviding, BCSBusinessLinkContentItemDescribing, NSCopying, NSSecureCoding>

 {
    BOOL _isDefault;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *language; // ivar: _language
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithBusinessLinkContent:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif