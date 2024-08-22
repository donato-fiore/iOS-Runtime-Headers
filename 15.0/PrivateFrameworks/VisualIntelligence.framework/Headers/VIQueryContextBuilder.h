// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIQUERYCONTEXTBUILDER_H
#define VIQUERYCONTEXTBUILDER_H

@class NSString, CLLocation, NSURL;
@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface VIQueryContextBuilder : NSObject {
    NSUInteger _queryID;
    NSString *_applicationIdentifier;
    CGFloat _uiScale;
    CLLocation *_location;
    NSURL *_imageURL;
    NSURL *_referralURL;
    NSInteger _imageType;
    NSString *_featureIdentifier;
    id<MTLDevice> *_preferredMetalDevice;
}




-(id)build;
-(id)setApplicationIdentifer:(id)arg0 ;
-(id)setFeatureIdentifier:(id)arg0 ;
-(id)setImageType:(NSInteger)arg0 ;
-(id)setImageURL:(id)arg0 ;
-(id)setLocation:(id)arg0 ;
-(id)setPreferredMetalDevice:(id)arg0 ;
-(id)setQueryID:(NSUInteger)arg0 ;
-(id)setReferralURL:(id)arg0 ;
-(id)setUIScale:(CGFloat)arg0 ;


@end


#endif