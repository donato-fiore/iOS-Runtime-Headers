// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLULOOKUPITEM_H
#define MLULOOKUPITEM_H

@class NSURL, NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "MLULookupItemContent.h"

@interface MLULookupItem : NSObject {
    NSURL *_url;
    *__DDResult _ddResult;
    NSString *_text;
    _NSRange _focusRange;
    NSArray *_attachments;
    NSUInteger _currentAttachmentIndex;
    _NSRange _proposedRange;
    BOOL _resolved;
}


@property (retain) NSDictionary *documentProperties; // ivar: _documentProperties
@property (retain, nonatomic) MLULookupItemContent *previewContent; // ivar: _previewContent


-(BOOL)_resolveAttachments:(id)arg0 currentAttachmentIndex:(NSUInteger)arg1 ;
-(BOOL)_resolveText:(id)arg0 focusRange:(struct _NSRange )arg1 ;
-(BOOL)_resolveURL:(id)arg0 DDResult:(struct __DDResult *)arg1 focusRange:(struct _NSRange )arg2 ;
-(BOOL)resolve;
-(NSUInteger)commitType;
-(id)initWithAttachments:(id)arg0 currentAttachment:(NSUInteger)arg1 ;
-(id)initWithURL:(id)arg0 dataDetectorsResult:(struct __DDResult *)arg1 text:(id)arg2 range:(struct _NSRange )arg3 ;
-(id)viewControllerToPresent;
-(id)webUrlToPresent;
-(struct _NSRange )proposedRange;
-(void)commit;
-(void)commitWithTransitionForPreviewViewController:(id)arg0 inViewController:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;


@end


#endif