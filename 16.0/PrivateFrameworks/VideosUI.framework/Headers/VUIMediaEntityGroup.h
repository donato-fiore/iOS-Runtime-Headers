// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMEDIAENTITYGROUP_H
#define VUIMEDIAENTITYGROUP_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIMediaEntityGroup : NSObject <NSCopying>



@property (copy, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *mediaEntities; // ivar: _mediaEntities
@property (copy, nonatomic) NSArray *sortIndexes; // ivar: _sortIndexes


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif