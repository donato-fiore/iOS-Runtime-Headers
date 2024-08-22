// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUICONTENTRATINGBADGEDESCRIPTOR_H
#define VUICONTENTRATINGBADGEDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VUIContentRatingBadgeDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *resourceName; // ivar: _resourceName
@property (readonly, nonatomic, getter=isTemplatedImage) BOOL templatedImage; // ivar: _templatedImage


-(id)initWithResourceName:(id)arg0 isTemplatedImage:(BOOL)arg1 ;


@end


#endif