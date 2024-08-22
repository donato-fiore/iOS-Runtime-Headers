// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSRADARNEWPROBLEMURLBUILDER_H
#define WBSRADARNEWPROBLEMURLBUILDER_H

@class NSArray, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface WBSRadarNewProblemURLBuilder : NSObject

@property (copy, nonatomic) NSArray *attachmentURLs; // ivar: _attachmentURLs
@property (nonatomic) NSInteger classification; // ivar: _classification
@property (copy, nonatomic) NSString *componentName; // ivar: _componentName
@property (copy, nonatomic) NSString *componentVersion; // ivar: _componentVersion
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url;




@end


#endif