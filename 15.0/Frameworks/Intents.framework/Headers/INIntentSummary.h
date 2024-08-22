// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ININTENTSUMMARY_H
#define ININTENTSUMMARY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface INIntentSummary : NSObject

@property (readonly, nonatomic) NSUInteger containedProperties; // ivar: _containedProperties
@property (readonly, copy, nonatomic) NSString *intentIdentifier; // ivar: _intentIdentifier
@property (readonly, copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, copy, nonatomic) NSString *originatingBundleId; // ivar: _originatingBundleId
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithIntentIdentifier:(id)arg0 originatingBundleId:(id)arg1 languageCode:(id)arg2 ;


@end


#endif