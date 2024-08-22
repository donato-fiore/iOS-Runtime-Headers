// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARQUICKLOOKPREVIEWITEM_H
#define ARQUICKLOOKPREVIEWITEM_H

@class NSString, UIColor, NSURL, NSDictionary;
@protocol QLPreviewItemPrivateProtocol, QLPreviewItem;

#import <Foundation/Foundation.h>


@interface ARQuickLookPreviewItem : NSObject <QLPreviewItemPrivateProtocol, QLPreviewItem>



@property (readonly) NSString *MIMEType;
@property (nonatomic) BOOL allowsContentScaling; // ivar: _allowsContentScaling
@property (readonly) CGFloat autoPlaybackPosition;
@property (readonly) UIColor *backgroundColorOverride;
@property (retain, nonatomic) NSURL *canonicalWebPageURL; // ivar: _canonicalWebPageURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (nonatomic) BOOL forceIgnoreMuteSwitch; // ivar: _forceIgnoreMuteSwitch
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPromisedItem;
@property (readonly, nonatomic) NSString *previewItemContentType;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly) NSURL *previewItemURLForDisplay;
@property (copy, nonatomic) NSDictionary *previewOptions;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsStatusPillHidden; // ivar: _wantsStatusPillHidden


-(id)initWithFileAtURL:(id)arg0 ;


@end


#endif