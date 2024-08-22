// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BBSECTIONICONVARIANT_H
#define BBSECTIONICONVARIANT_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding>

 {
    id *_imageInfo;
    NSInteger _imageInfoType;
}


@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *bundlePath; // ivar: _bundlePath
@property (nonatomic) NSInteger format; // ivar: _format
@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *imagePath;
@property (nonatomic, getter=isPrecomposed) BOOL precomposed; // ivar: _precomposed
@property (copy, nonatomic) NSString *systemImageName;


+(BOOL)supportsSecureCoding;
+(id)variantWithFormat:(NSInteger)arg0 applicationIdentifier:(id)arg1 ;
+(id)variantWithFormat:(NSInteger)arg0 imageData:(id)arg1 ;
+(id)variantWithFormat:(NSInteger)arg0 imageName:(id)arg1 inBundle:(id)arg2 ;
+(id)variantWithFormat:(NSInteger)arg0 imageName:(id)arg1 inBundleAtPath:(id)arg2 ;
+(id)variantWithFormat:(NSInteger)arg0 imagePath:(id)arg1 ;
+(id)variantWithFormat:(NSInteger)arg0 systemImageName:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithFormat:(NSInteger)arg0 imageInfo:(id)arg1 imageInfoType:(NSInteger)arg2 ;
-(id)_processImageInfo:(id)arg0 imageInfoType:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_setImageInfo:(id)arg0 ofType:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif