// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTRELATIONSDESCRIPTIONLABELS_H
#define CNCONTACTRELATIONSDESCRIPTIONLABELS_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface CNContactRelationsDescriptionLabels : NSObject

@property (readonly, nonatomic) NSArray *extendedLabels; // ivar: _extendedLabels
@property (readonly, nonatomic) NSArray *extendedLocaleSpecificLabels; // ivar: _extendedLocaleSpecificLabels
@property (readonly, nonatomic) NSDictionary *localizedStringsByLabelKey; // ivar: _localizedStringsByLabelKey
@property (readonly, nonatomic) NSArray *preferredLanguages; // ivar: _preferredLanguages
@property (readonly, nonatomic) NSArray *standardLabels; // ivar: _standardLabels
@property (readonly, nonatomic) NSArray *standardLocaleSpecificLabels; // ivar: _standardLocaleSpecificLabels


-(id)initWithPreferredLanguages:(id)arg0 standardLabels:(id)arg1 standardLocaleSpecificLabels:(id)arg2 extendedLabels:(id)arg3 extendedLocaleSpecificLabels:(id)arg4 localizedStringsByLabelKey:(id)arg5 ;


@end


#endif