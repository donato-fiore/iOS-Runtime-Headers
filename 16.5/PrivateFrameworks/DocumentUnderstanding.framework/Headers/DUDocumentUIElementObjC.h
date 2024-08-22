// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DUDOCUMENTUIELEMENTOBJC_H
#define DUDOCUMENTUIELEMENTOBJC_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding19DUDocumentUIElement.h"

@interface DUDocumentUIElementObjC : NSObject {
    _TtC21DocumentUnderstanding19DUDocumentUIElement *_underlyingElement;
}


@property (nonatomic) CGPoint absoluteOriginOnScreen;
@property (copy, nonatomic) NSString *classDescriptor;
@property (nonatomic) float fontSize;
@property (nonatomic) CGRect frameInWindow;
@property (nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL isValidForContentExtraction;
@property (copy, nonatomic) NSArray *superviewClassNames;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *version;


-(id)init;


@end


#endif