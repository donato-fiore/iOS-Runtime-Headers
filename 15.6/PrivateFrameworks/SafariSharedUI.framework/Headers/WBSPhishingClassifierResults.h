// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPHISHINGCLASSIFIERRESULTS_H
#define WBSPHISHINGCLASSIFIERRESULTS_H

@class NSDictionary, NSString, UIImage, NSURL;

#import <Foundation/Foundation.h>


@interface WBSPhishingClassifierResults : NSObject

@property (readonly, nonatomic) NSUInteger classification; // ivar: _classification
@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 image:(id)arg1 classification:(NSUInteger)arg2 identifier:(id)arg3 confidence:(float)arg4 ;


@end


#endif