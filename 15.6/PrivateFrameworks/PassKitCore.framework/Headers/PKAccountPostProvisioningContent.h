// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTPOSTPROVISIONINGCONTENT_H
#define PKACCOUNTPOSTPROVISIONINGCONTENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKAccountPostProvisioningContent : NSObject

@property (readonly, copy, nonatomic) NSString *body; // ivar: _body
@property (readonly, copy, nonatomic) NSString *primaryButtonTitle; // ivar: _primaryButtonTitle
@property (readonly, copy, nonatomic) NSString *secondaryButtonTitle; // ivar: _secondaryButtonTitle
@property (readonly, copy, nonatomic) NSString *subTitle; // ivar: _subTitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)initWithDictionary:(id)arg0 ;


@end


#endif