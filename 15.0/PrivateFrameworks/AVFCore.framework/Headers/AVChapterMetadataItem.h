// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCHAPTERMETADATAITEM_H
#define AVCHAPTERMETADATAITEM_H



#import "AVMetadataItem.h"
#import "AVChapterMetadataItemInternal.h"

@interface AVChapterMetadataItem : AVMetadataItem {
    AVChapterMetadataItemInternal *_privChapter;
}




-(BOOL)_valueForKeyDependsOnMetadataValue:(id)arg0 ;
-(NSInteger)_chapterGroupIndex;
-(NSInteger)_chapterIndex;
-(NSInteger)_valueStatus;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)_initWithAsset:(id)arg0 chapterGroupIndex:(NSInteger)arg1 chapterIndex:(NSInteger)arg2 chapterType:(id)arg3 extendedLanguageTag:(id)arg4 languageCode:(id)arg5 chapterDataType:(id)arg6 time:(struct ? )arg7 duration:(struct ? )arg8 ;
-(id)commonKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataType;
-(id)description;
-(id)extendedLanguageTag;
-(id)extraAttributes;
-(id)init;
-(id)key;
-(id)keySpace;
-(id)languageCode;
-(id)locale;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)startDate;
-(id)value;
-(struct ? )duration;
-(struct ? )time;
-(void)_addFigAssetNotifications;
-(void)_ensureValueLoadedSync;
-(void)_removeFigAssetNotifications;
-(void)_setValueStatus:(NSInteger)arg0 figErrorCode:(int)arg1 ;
-(void)_takeValueFrom:(id)arg0 ;
-(void)cancelLoading;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif