// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCTHUMBNAILKEY_H
#define DOCTHUMBNAILKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "DOCThumbnailDescriptor.h"

@interface DOCThumbnailKey : NSObject <NSCopying>



@property (readonly, nonatomic) DOCThumbnailDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSObject<NSCopying> *primaryKey; // ivar: _primaryKey


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPrimaryKey:(id)arg0 descriptor:(id)arg1 ;


@end


#endif