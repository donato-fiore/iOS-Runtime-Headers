// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSECTIONEDOBJECTREFERENCE_H
#define PXSECTIONEDOBJECTREFERENCE_H

@protocol NSCopying, NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface PXSectionedObjectReference : NSObject <NSCopying>



@property (readonly, nonatomic) PXSimpleIndexPath indexPath; // ivar: _indexPath
@property (readonly, copy, nonatomic) NSObject<NSObject><NSCopying> *itemObject; // ivar: _itemObject
@property (readonly, copy, nonatomic) NSObject<NSObject><NSCopying> *leafObject; // ivar: _leafObject
@property (readonly, copy, nonatomic) NSObject<NSObject><NSCopying> *sectionObject; // ivar: _sectionObject
@property (readonly, copy, nonatomic) NSObject<NSObject><NSCopying> *subitemObject; // ivar: _subitemObject


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSectionObject:(id)arg0 itemObject:(id)arg1 subitemObject:(id)arg2 indexPath:(struct PXSimpleIndexPath )arg3 ;


@end


#endif