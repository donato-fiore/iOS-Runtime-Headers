// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPARSECIMAGEREPRESENTATION_H
#define WBSPARSECIMAGEREPRESENTATION_H

@class WBSParsecModel, NSString, UIImage, NSNumber;
@protocol OS_dispatch_group;



@interface WBSParsecImageRepresentation : WBSParsecModel {
    NSString *_dataString;
    NSString *_identifier;
    NSString *_imageURLString;
    UIImage *_image;
    BOOL _template;
    NSObject<OS_dispatch_group> *_downloadGroup;
}


@property (readonly, nonatomic) NSNumber *baselineOffset; // ivar: _baselineOffset
@property (readonly, nonatomic) NSNumber *roundCornerRadius; // ivar: _roundCornerRadius


+(id)_bagImageDataCache;
+(id)schema;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)test_isTemplate;
-(NSUInteger)hash;
-(id)_imageWithData:(id)arg0 ;
-(id)_templateImageWithImage:(id)arg0 ;
-(id)imageWithScaleFactor:(CGFloat)arg0 ;
-(id)imageWithSession:(id)arg0 ;
-(id)initWithJSONObject:(id)arg0 ;
-(id)test_data;
-(id)test_identifier;
-(id)test_imageURLString;
-(void)_fetchImageData;
-(void)_fetchImageDataUsingBlock:(id)arg0 ;


@end


#endif