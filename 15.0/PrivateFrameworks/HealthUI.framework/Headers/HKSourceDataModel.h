// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSOURCEDATAMODEL_H
#define HKSOURCEDATAMODEL_H

@class UIImage, NSDictionary, HKSource;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HKSourceDataModel : NSObject <NSCopying>



@property (retain) UIImage *icon; // ivar: _icon
@property BOOL installed; // ivar: _installed
@property (copy) NSDictionary *purposeStrings; // ivar: _purposeStrings
@property (readonly, copy, nonatomic) HKSource *source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSource:(id)arg0 ;


@end


#endif