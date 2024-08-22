// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNDUPLICATESETCONTACTIMAGE_H
#define CNDUPLICATESETCONTACTIMAGE_H

@class NSManagedObject, NSString, NSData;


#import "CNDuplicateSet.h"

@interface CNDuplicateSetContactImage : NSManagedObject

@property (nonatomic, copy) NSString *cropRectString;
@property (nonatomic, retain) CNDuplicateSet *duplicateSet;
@property (nonatomic, copy) NSData *fullscreenImageData;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, copy) NSData *imageHash;
@property (nonatomic, copy) NSString *imageType;
@property (nonatomic, copy) NSData *memojiMetadata;
@property (nonatomic, copy) NSData *thumbnailImageData;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif