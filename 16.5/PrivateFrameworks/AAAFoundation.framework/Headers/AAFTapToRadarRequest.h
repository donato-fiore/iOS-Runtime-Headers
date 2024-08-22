// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAFTAPTORADARREQUEST_H
#define AAFTAPTORADARREQUEST_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AAFTapToRadarRequest : NSObject

@property (copy, nonatomic) NSString *alertCancelButtonText; // ivar: _alertCancelButtonText
@property (copy, nonatomic) NSString *alertDefaultButtonText; // ivar: _alertDefaultButtonText
@property (copy, nonatomic) NSString *alertMessage; // ivar: _alertMessage
@property (copy, nonatomic) id *alertOtherButtonAction; // ivar: _alertOtherButtonAction
@property (copy, nonatomic) NSString *alertOtherButtonText; // ivar: _alertOtherButtonText
@property (copy, nonatomic) NSString *alertTitle; // ivar: _alertTitle
@property (copy, nonatomic) NSString *componentID; // ivar: _componentID
@property (copy, nonatomic) NSString *componentName; // ivar: _componentName
@property (copy, nonatomic) NSString *componentVersion; // ivar: _componentVersion
@property (retain, nonatomic) NSArray *keywords; // ivar: _keywords
@property (copy, nonatomic) NSString *radarDescription; // ivar: _radarDescription
@property (copy, nonatomic) NSString *radarTitle; // ivar: _radarTitle


-(id)formattedKeywords;


@end


#endif