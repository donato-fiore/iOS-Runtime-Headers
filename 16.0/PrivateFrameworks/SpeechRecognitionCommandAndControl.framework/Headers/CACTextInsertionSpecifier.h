// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACTEXTINSERTIONSPECIFIER_H
#define CACTEXTINSERTIONSPECIFIER_H

@class AXElement, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CACTextInsertionSpecifier : NSObject

@property (retain) AXElement *axElement; // ivar: _axElement
@property (retain) NSString *commandIdentifier; // ivar: _commandIdentifier
@property (retain) NSString *insertedCategoryID; // ivar: _insertedCategoryID
@property _NSRange insertedRange; // ivar: _insertedRange
@property (retain) NSString *insertedString; // ivar: _insertedString
@property (retain) NSDictionary *recognizedParams; // ivar: _recognizedParams




@end


#endif