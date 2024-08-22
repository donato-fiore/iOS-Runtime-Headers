// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPLUGINDISPLAYCONTAINER_H
#define CKPLUGINDISPLAYCONTAINER_H

@class UIImage, IMPluginPayload;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKPluginDisplayContainer : NSObject <NSSecureCoding>



@property (retain, nonatomic) UIImage *composeImage; // ivar: _composeImage
@property (retain, nonatomic) IMPluginPayload *pluginPayload; // ivar: _pluginPayload


+(BOOL)supportsSecureCoding;
+(id)pluginDisplayContainerWithPluginPayload:(id)arg0 composeImage:(id)arg1 ;
+(id)unarchiveFromData:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)pasteboardItemProvider;
-(id)rtfDocumentItemsWithFormatString:(id)arg0 selectedTextRange:(struct _NSRange )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif