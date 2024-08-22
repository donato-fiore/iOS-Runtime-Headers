// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTTANGIERSTORAGE_H
#define SXTEXTTANGIERSTORAGE_H

@class TSWPStorage, NSMutableArray, NSLocale, NSSet, NSCache;



@interface SXTextTangierStorage : TSWPStorage

@property (retain, nonatomic) NSMutableArray *attachments; // ivar: _attachments
@property (nonatomic) BOOL isSelectable; // ivar: _isSelectable
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) NSSet *rangedExclusionPaths; // ivar: _rangedExclusionPaths
@property (nonatomic) BOOL shouldHyphenate; // ivar: _shouldHyphenate
@property (retain, nonatomic) NSCache *tokenizersCache; // ivar: _tokenizersCache
@property (readonly, nonatomic) os_unfair_lock_s unfairLock; // ivar: _unfairLock


-(BOOL)supportsSections;
-(id)initWithContext:(id)arg0 stylesheet:(id)arg1 storageKind:(int)arg2 string:(id)arg3 locale:(id)arg4 ;
-(struct _NSRange )insertAttachmentOrFootnote:(id)arg0 range:(struct _NSRange )arg1 ;
-(struct _NSRange )wordAtCharIndex:(NSUInteger)arg0 includePreviousWord:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif