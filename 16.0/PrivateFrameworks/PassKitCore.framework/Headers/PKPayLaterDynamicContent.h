// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERDYNAMICCONTENT_H
#define PKPAYLATERDYNAMICCONTENT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PKPayLaterDynamicContent : NSObject {
    NSDictionary *_contentByPageType;
}




+(id)_contentByPageTypeFromDictionary:(id)arg0 ;
-(id)description;
-(id)dynamicContentPageForPageType:(NSUInteger)arg0 ;
-(id)dynamicContentPageForPageType:(NSUInteger)arg0 productType:(NSUInteger)arg1 optionIdentifier:(id)arg2 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif