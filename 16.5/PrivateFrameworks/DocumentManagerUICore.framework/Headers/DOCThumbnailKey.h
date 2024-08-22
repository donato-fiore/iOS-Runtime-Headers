// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCTHUMBNAILKEY_H
#define DOCTHUMBNAILKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "DOCThumbnailDescriptor.h"

@interface DOCThumbnailKey : NSObject <NSCopying>



@property (readonly, nonatomic) DOCThumbnailDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSString *primaryKey; // ivar: _primaryKey


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPrimaryKey:(id)arg0 descriptor:(id)arg1 ;


@end


#endif