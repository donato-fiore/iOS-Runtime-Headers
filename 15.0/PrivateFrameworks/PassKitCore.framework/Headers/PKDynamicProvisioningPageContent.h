// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDYNAMICPROVISIONINGPAGECONTENT_H
#define PKDYNAMICPROVISIONINGPAGECONTENT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PKDynamicProvisioningPageLearnMoreContent.h"

@interface PKDynamicProvisioningPageContent : NSObject <NSCopying>



@property (copy, nonatomic) NSString *body; // ivar: _body
@property (nonatomic) unsigned char contentAlignment; // ivar: _contentAlignment
@property (copy, nonatomic) NSString *disclosureTitle; // ivar: _disclosureTitle
@property (copy, nonatomic) NSString *footnote; // ivar: _footnote
@property (copy, nonatomic) NSString *footnoteDisclosure; // ivar: _footnoteDisclosure
@property (retain, nonatomic) NSString *heroImageURL; // ivar: _heroImageURL
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger layout; // ivar: _layout
@property (retain, nonatomic) PKDynamicProvisioningPageLearnMoreContent *learnMore; // ivar: _learnMore
@property (nonatomic) NSUInteger pageNumber; // ivar: _pageNumber
@property (copy, nonatomic) NSString *primaryActionIdentifier; // ivar: _primaryActionIdentifier
@property (copy, nonatomic) NSString *primaryActionTitle; // ivar: _primaryActionTitle
@property (copy, nonatomic) NSString *secondaryActionIdentifier; // ivar: _secondaryActionIdentifier
@property (retain, nonatomic) PKDynamicProvisioningPageLearnMoreContent *secondaryActionItem; // ivar: _secondaryActionItem
@property (copy, nonatomic) NSString *secondaryActionTitle; // ivar: _secondaryActionTitle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEmptyPage;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictonary:(id)arg0 ;


@end


#endif