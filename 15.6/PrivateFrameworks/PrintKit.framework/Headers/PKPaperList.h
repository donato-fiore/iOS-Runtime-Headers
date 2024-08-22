// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAPERLIST_H
#define PKPAPERLIST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PKPaperList : NSObject

@property (retain) NSArray *duplexPapers; // ivar: _duplexPapers
@property BOOL hasMediaReady; // ivar: _hasMediaReady
@property (retain) NSArray *papers; // ivar: _papers
@property (retain) NSArray *photoPapers; // ivar: _photoPapers
@property (retain, nonatomic) NSArray *rolls; // ivar: _rolls
@property (retain) NSArray *simplexPapers; // ivar: _simplexPapers


+(id)mediaDictFromAttrs:(struct _ipp_s *)arg0 ;
+(id)paperListWithAttrs:(struct _ipp_s *)arg0 ;
+(id)paperListWithTXTRecord:(id)arg0 ;
-(BOOL)hasMatchingLoadedRoll:(id)arg0 ;
-(BOOL)isPaperReady:(id)arg0 ;
-(NSInteger)jobTypesSupported:(id)arg0 ;
-(id)adjustMargins:(id)arg0 forDuplex:(id)arg1 ;
-(id)availableRollPapersPreferBorderless:(BOOL)arg0 ;
-(id)conjureMediaFromTXT:(id)arg0 ;
-(id)filterPapers:(id)arg0 usingBlock:(id)arg1 ;
-(id)filterUsingBlock:(id)arg0 ;
-(id)initWithAttrs:(struct _ipp_s *)arg0 ;
-(id)initWithTXTRecord:(id)arg0 ;
-(id)matchPaper:(id)arg0 ;
-(id)matchPaper:(id)arg0 inList:(id)arg1 ;
-(id)matchedPaper:(id)arg0 preferBorderless:(BOOL)arg1 withDuplexMode:(id)arg2 didMatch:(*BOOL)arg3 ;
-(id)paperListForDuplexMode:(id)arg0 ;
-(id)papersForDocumentWithSize:(struct CGSize )arg0 scaleUpOnRoll:(BOOL)arg1 andDuplex:(BOOL)arg2 ;
-(id)papersForPhotoWithSize:(struct CGSize )arg0 ;
-(id)rollReadyPaperListForDocumentWithContentSize:(struct CGSize )arg0 scaleUp:(BOOL)arg1 ;
-(id)rollReadyPaperListForPhotoWithContentSize:(struct CGSize )arg0 ;
-(id)rollReadyPaperListWithContentSize:(struct CGSize )arg0 forPhoto:(BOOL)arg1 ;
-(id)tersePaperFrom:(id)arg0 withMediaInfo:(id)arg1 ;
-(id)tersePaperFrom:(id)arg0 withRequest:(id)arg1 ;
-(void)addPaperSet:(*id)arg0 withCount:(int)arg1 toArrays:(*id)arg2 ;
-(void)categorizePapers:(id)arg0 ;
-(void)dealloc;


@end


#endif