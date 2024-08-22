// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICNAATTACHMENTREPORTTONOTE_H
#define _ICNAATTACHMENTREPORTTONOTE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _ICNAAttachmentReportToNote : NSObject

@property (retain, nonatomic) NSMutableDictionary *countOfAttachmentByUTI; // ivar: _countOfAttachmentByUTI
@property (nonatomic) NSUInteger countOfAttachments; // ivar: _countOfAttachments
@property (nonatomic) NSUInteger countOfFullscreenDrawingStrokes; // ivar: _countOfFullscreenDrawingStrokes
@property (nonatomic) NSUInteger countOfInlineDrawingV1FingerStrokes; // ivar: _countOfInlineDrawingV1FingerStrokes
@property (nonatomic) NSUInteger countOfInlineDrawingV1PencilStrokes; // ivar: _countOfInlineDrawingV1PencilStrokes
@property (nonatomic) NSUInteger countOfInlineDrawingV2FingerStrokes; // ivar: _countOfInlineDrawingV2FingerStrokes
@property (nonatomic) NSUInteger countOfInlineDrawingV2PencilStrokes; // ivar: _countOfInlineDrawingV2PencilStrokes
@property (nonatomic) BOOL hasDeepLink; // ivar: _hasDeepLink
@property (nonatomic) BOOL hasImages; // ivar: _hasImages
@property (nonatomic) BOOL hasSafariHighlight; // ivar: _hasSafariHighlight


-(id)init;
-(void)reportAttachmentTypeUTI:(id)arg0 ;
-(void)reportDrawingWithSnapshotData:(id)arg0 ;


@end


#endif