// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIWEBPDFSEARCHRESULT_H
#define UIWEBPDFSEARCHRESULT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface UIWebPDFSearchResult : NSObject

@property (nonatomic) CGRect boundingBox; // ivar: boundingBox
@property (nonatomic) NSUInteger pageIndex; // ivar: pageIndex
@property (retain, nonatomic) NSArray *rects; // ivar: rects
@property (retain, nonatomic) NSArray *rotationAngles; // ivar: rotationAngles
@property (retain, nonatomic) NSString *string; // ivar: string
@property (retain, nonatomic) NSArray *strings; // ivar: strings


-(void)dealloc;


@end


#endif