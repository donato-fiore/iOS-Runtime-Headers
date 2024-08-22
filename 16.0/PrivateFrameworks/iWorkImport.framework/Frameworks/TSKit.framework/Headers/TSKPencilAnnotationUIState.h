// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKPENCILANNOTATIONUISTATE_H
#define TSKPENCILANNOTATIONUISTATE_H

@class TSPObject, NSUserDefaults, NSHashTable, TSUColor;



@interface TSKPencilAnnotationUIState : TSPObject {
    NSUserDefaults *_userDefaults;
    NSUInteger _currentToolType;
    NSHashTable *_observers;
    TSUColor *_penToolColor;
    CGFloat _penToolOpacity;
    CGFloat _penToolWidth;
    TSUColor *_highlighterToolColor;
    CGFloat _highlighterToolOpacity;
    CGFloat _highlighterToolWidth;
}




+(id)strokeWidthsForToolType:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)p_userDefaultsRepresentationForToolType:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)p_defaultToolType;
-(NSUInteger)p_toolTypeFromUserDefaultsRepresentation:(NSInteger)arg0 ;
-(id)copy;
-(id)initWithContext:(id)arg0 userDefaults:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_setColor:(id)arg0 forToolType:(NSUInteger)arg1 ;
-(void)p_setDefaultToolType:(NSUInteger)arg0 ;
-(void)p_setupDefaultValues;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif