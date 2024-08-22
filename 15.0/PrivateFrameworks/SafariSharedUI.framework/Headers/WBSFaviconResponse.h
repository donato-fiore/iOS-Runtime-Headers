// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSFAVICONRESPONSE_H
#define WBSFAVICONRESPONSE_H

@class NSString, UIColor, UIImage;
@protocol WBSIconResponse;


#import "WBSSiteMetadataResponse.h"

@interface WBSFaviconResponse : WBSSiteMetadataResponse <WBSIconResponse>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *extractedBackgroundColor;
@property (readonly, nonatomic) UIImage *favicon; // ivar: _favicon
@property (readonly, nonatomic) NSUInteger faviconType; // ivar: _faviconType
@property (readonly, nonatomic, getter=isGenerated) BOOL generated;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly) Class superclass;


-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 favicon:(id)arg1 faviconType:(NSUInteger)arg2 ;


@end


#endif