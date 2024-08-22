// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNPROTOTYPEFORUNDOTEMPLATESLIDECHANGE_H
#define KNPROTOTYPEFORUNDOTEMPLATESLIDECHANGE_H

@class TSPObject, NSUUID, NSArray, NSString, NSDictionary;
@protocol TSSPropertySource;


#import "KNSlideStyle.h"
#import "KNTemplateSlide.h"

@interface KNPrototypeForUndoTemplateSlideChange : TSPObject <TSSPropertySource>

 {
    NSUUID *_templateSlideId;
    NSArray *_drawableInfoIdList;
    NSArray *_placeholderTagsList;
}


@property (readonly, nonatomic) NSArray *childInfos; // ivar: _childInfos
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *placeholders; // ivar: _placeholders
@property (readonly, nonatomic) NSDictionary *placeholdersForTags; // ivar: _placeholdersForTags
@property (retain, nonatomic) KNSlideStyle *slideStyle; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) KNTemplateSlide *templateSlide;


+(id)blobWithSlide:(id)arg0 ;
-(BOOL)containsProperty:(int)arg0 ;
-(CGFloat)CGFloatValueForProperty:(int)arg0 ;
-(CGFloat)doubleValueForProperty:(int)arg0 ;
-(float)floatValueForProperty:(int)arg0 ;
-(id)boxedObjectForProperty:(int)arg0 ;
-(id)initWithSlide:(id)arg0 ;
-(id)objectForProperty:(int)arg0 ;
-(int)intValueForProperty:(int)arg0 ;
-(void)dealloc;
-(void)didInitFromSOS;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)migrateStyles;
-(void)rebuildChildInfosAndPlaceholdersFromMaster:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif