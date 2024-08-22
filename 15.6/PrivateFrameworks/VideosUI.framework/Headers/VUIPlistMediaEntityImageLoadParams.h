// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIPLISTMEDIAENTITYIMAGELOADPARAMS_H
#define VUIPLISTMEDIAENTITYIMAGELOADPARAMS_H

@class NSString, NSURL;
@protocol VUIImageLoadParams;

#import <Foundation/Foundation.h>


@interface VUIPlistMediaEntityImageLoadParams : NSObject <VUIImageLoadParams>



@property (copy, nonatomic) NSString *baseImageIdentifier; // ivar: _baseImageIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *imageIdentifier; // ivar: _imageIdentifier
@property (nonatomic) NSUInteger imageType; // ivar: _imageType
@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithImageURL:(id)arg0 baseImageIdentifier:(id)arg1 imageType:(NSUInteger)arg2 ;


@end


#endif