// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTEXTATTACHMENTLOCATIONCACHE_H
#define ICTEXTATTACHMENTLOCATIONCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ICLayoutManager.h"

@interface ICTextAttachmentLocationCache : NSObject

@property (retain, nonatomic) Class cachedTextAttachmentType; // ivar: _cachedTextAttachmentType
@property (weak, nonatomic) ICLayoutManager *layoutManager; // ivar: _layoutManager
@property (readonly, nonatomic) NSMutableDictionary *locationByTextAttachmentIdentifier; // ivar: _locationByTextAttachmentIdentifier
@property (nonatomic) NSUInteger previousScanHaltLocation; // ivar: _previousScanHaltLocation


-(BOOL)validateLocation:(NSUInteger)arg0 againstViewIdentifier:(id)arg1 ;
-(NSUInteger)locationForTextAttachmentOfViewIdentifier:(id)arg0 ;
-(NSUInteger)locationForTextAttachmentOfViewIdentifier:(id)arg0 keyExistsBeforeEnumeration:(*BOOL)arg1 validationSuccessful:(*BOOL)arg2 stepsOfEnumeration:(*NSUInteger)arg3 ;
-(NSUInteger)nextLocationForRange:(struct _NSRange )arg0 ;
-(id)initWithLayoutManager:(id)arg0 cachedTextAttachmentType:(Class)arg1 ;
-(void)clear;
-(void)enumerateTextAttachmentsInRangeUsingBlock:(id)arg0 ;
-(void)enumerateTextAttachmentsInRangeWithFirstEnumerateRangeResult:(struct _NSRange *)arg0 secondEnumerateRangeResult:(struct _NSRange *)arg1 usingBlock:(id)arg2 ;
-(void)forgetLocationForViewIdentifier:(id)arg0 ;
-(void)setLocation:(NSUInteger)arg0 forTextAttachmentOfViewIdentifier:(id)arg1 ;


@end


#endif