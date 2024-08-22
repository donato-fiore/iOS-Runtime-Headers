// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTOCSETTINGS_H
#define TSWPTOCSETTINGS_H

@class TSPObject, NSString, NSSet, TSURetainedPointerKeyDictionary;
@protocol TSPCopying, TSSPreset, TSSStyleClient;



@interface TSWPTOCSettings : TSPObject <TSPCopying, TSSPreset, TSSStyleClient>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *indexedStyles;
@property (retain, nonatomic) TSURetainedPointerKeyDictionary *map; // ivar: _map
@property (readonly, nonatomic) NSSet *paragraphStylesShownInTOC;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (nonatomic) NSUInteger scope; // ivar: _scope
@property (readonly) Class superclass;


-(BOOL)showInTOCForParagraphStyle:(id)arg0 ;
-(id)copyUsingDeepCopy;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)entryStyleForParagraphStyle:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)addIndexedStyle:(id)arg0 withEntryStyle:(id)arg1 ;
-(void)addIndexedStyle:(id)arg0 withEntryStyle:(id)arg1 showInTOC:(BOOL)arg2 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_upgradeStyle:(id)arg0 withStylesheet:(id)arg1 ;
-(void)removeIndexedStyle:(id)arg0 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)upgradeWithStylesheet:(id)arg0 ;


@end


#endif