// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDOCUMENTPICKERCONTAINERITEMTHUMBNAILKEY_H
#define _UIDOCUMENTPICKERCONTAINERITEMTHUMBNAILKEY_H


#import <Foundation/Foundation.h>


@interface _UIDocumentPickerContainerItemThumbnailKey : NSObject

@property (readonly, nonatomic) NSObject *primaryKey; // ivar: _primaryKey
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPrimaryKey:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 ;


@end


#endif