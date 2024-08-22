// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSTOUCHICONRESPONSE_H
#define WBSTOUCHICONRESPONSE_H

@class NSString, UIColor, UIImage;
@protocol WBSIconResponse;


#import "WBSSiteMetadataResponse.h"

@interface WBSTouchIconResponse : WBSSiteMetadataResponse <WBSIconResponse>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *extractedBackgroundColor; // ivar: _extractedBackgroundColor
@property (readonly, nonatomic, getter=isGenerated) BOOL generated; // ivar: _generated
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImage *touchIcon; // ivar: _touchIcon


+(id)responseWithURL:(id)arg0 touchIcon:(id)arg1 generated:(BOOL)arg2 extractedBackgroundColor:(id)arg3 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 touchIcon:(id)arg1 generated:(BOOL)arg2 extractedBackgroundColor:(id)arg3 ;


@end


#endif