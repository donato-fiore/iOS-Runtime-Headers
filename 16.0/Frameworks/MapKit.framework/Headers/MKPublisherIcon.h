// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPUBLISHERICON_H
#define MKPUBLISHERICON_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface MKPublisherIcon : NSObject

@property (readonly, nonatomic) UIImage *publisherImage; // ivar: _publisherImage
@property (readonly, nonatomic) NSString *publisherName; // ivar: _publisherName


-(id)initUsingName:(id)arg0 andImage:(id)arg1 ;


@end


#endif