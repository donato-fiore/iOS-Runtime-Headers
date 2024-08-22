// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDICPREVIEWITEM_H
#define _UIDICPREVIEWITEM_H

@class NSURL, NSString;
@protocol QLPreviewItem;

#import <Foundation/Foundation.h>


@interface _UIDICPreviewItem : NSObject <QLPreviewItem>

 {
    NSURL *_URLsToDeleteOnDealloc;
    NSString *_previewItemContentType;
}


@property (retain, nonatomic) NSURL *URLToDeleteOnDealloc; // ivar: _URLToDeleteOnDealloc
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *previewItemContentType;
@property (retain, nonatomic) NSString *previewItemTitle; // ivar: _name
@property (retain, nonatomic) NSURL *previewItemURL; // ivar: _URL
@property (retain, nonatomic) NSURL *previewItemURLForDisplay; // ivar: _previewItemURLForDisplay
@property (retain, nonatomic) NSURL *previewItemURLOverride; // ivar: _previewURLOverride
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif