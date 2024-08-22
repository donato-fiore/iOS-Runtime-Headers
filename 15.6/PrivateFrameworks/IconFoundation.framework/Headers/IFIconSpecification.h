// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IFICONSPECIFICATION_H
#define IFICONSPECIFICATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface IFIconSpecification : NSObject

@property (readonly) NSArray *allImageSpecifications;
@property (readonly) NSArray *allVariants;
@property (readonly) NSArray *imageSpecifications; // ivar: _imageSpecifications
@property (readonly) CGFloat maxScale; // ivar: _maxScale
@property (readonly) CGSize maxSize; // ivar: _maxSize
@property (readonly) CGFloat minScale; // ivar: _minScale
@property (readonly) CGSize minSize; // ivar: _minSize
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSArray *variants; // ivar: _variants


+(id)defaultIconSpecification;
+(id)iosAppIconSpecification;
+(id)iosDocumentGlyphSpecification;
+(id)iosDocumentIconSpecification;
+(id)iosMessagesAppIconSpecification;
+(id)macosDocumentIconSpecification;
+(id)macosIconSpecification;
+(id)macosTemplateIconSpecification;
+(id)watchAppIconSpecification;
-(id)_initWithName:(id)arg0 imageSpecifiactions:(id)arg1 variants:(id)arg2 ;
-(id)description;
-(id)imageSpecificationForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)imageSpecificationsMatchingPredicate:(id)arg0 ;
-(id)imageSpecificationsWithTags:(id)arg0 withoutTags:(id)arg1 ;
-(id)init;


@end


#endif