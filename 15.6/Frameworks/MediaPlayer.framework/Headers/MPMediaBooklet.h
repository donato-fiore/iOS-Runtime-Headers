// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIABOOKLET_H
#define MPMEDIABOOKLET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPMediaBooklet : NSObject

@property (nonatomic) NSInteger fileSize; // ivar: fileSize
@property (nonatomic) NSUInteger itemPersistentID; // ivar: itemPersistentID
@property (copy, nonatomic) NSString *name; // ivar: name
@property (copy, nonatomic) NSString *redownloadParams; // ivar: redownloadParams
@property (nonatomic) NSInteger storeItemID; // ivar: storeItemID


-(id)description;


@end


#endif