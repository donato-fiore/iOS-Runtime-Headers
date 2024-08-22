// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKCOLUMNELEMENT_H
#define IKCOLUMNELEMENT_H

@class NSString;


#import "IKCollectionElement.h"
#import "IKImageElement.h"

@interface IKColumnElement : IKCollectionElement

@property (readonly, nonatomic) NSString *columnType;
@property (readonly, nonatomic) IKImageElement *headerImage;




@end


#endif