// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIIMAGEINFOMANAGEDOBJECT_H
#define VUIIMAGEINFOMANAGEDOBJECT_H

@class NSManagedObject, NSString;


#import "VUIImageDataManagedObject.h"

@interface VUIImageInfoManagedObject : NSManagedObject

@property (nonatomic) CGFloat canonicalHeight;
@property (nonatomic) CGFloat canonicalWidth;
@property (retain, nonatomic) VUIImageDataManagedObject *imageData;
@property (nonatomic) NSInteger imageType;
@property (copy, nonatomic) NSString *urlFormat;


+(id)fetchRequest;


@end


#endif