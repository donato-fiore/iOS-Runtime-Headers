// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIINDEXBARENTRYDESCRIPTOR_H
#define SKUIINDEXBARENTRYDESCRIPTOR_H

@class NSAttributedString, UIImage;

#import <Foundation/Foundation.h>

#import "SKUIArtwork.h"

@interface SKUIIndexBarEntryDescriptor : NSObject

@property (retain, nonatomic) SKUIArtwork *artwork; // ivar: _artwork
@property (copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (nonatomic) NSInteger entryDescriptorType; // ivar: _entryDescriptorType
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) CGSize size; // ivar: _size
@property (nonatomic) NSInteger visibilityPriority; // ivar: _visibilityPriority


+(id)entryDescriptorWithArtwork:(id)arg0 ;
+(id)entryDescriptorWithAttributedString:(id)arg0 ;
+(id)entryDescriptorWithImage:(id)arg0 ;
+(id)placeholderEntryDescriptorWithSize:(struct CGSize )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif