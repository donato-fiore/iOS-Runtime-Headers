// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPPASTEBOARDLOCATIONITEM_H
#define PPPASTEBOARDLOCATIONITEM_H

@class NSDictionary, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface PPPasteboardLocationItem : NSObject

@property (copy, nonatomic) NSDictionary *addressComponents; // ivar: _addressComponents
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSDate *createdAt; // ivar: _createdAt
@property (copy, nonatomic) NSString *text; // ivar: _text


-(NSUInteger)memoryFootprintEstimate;


@end


#endif