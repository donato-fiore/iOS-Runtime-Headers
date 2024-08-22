// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPSTYLEDIFF_H
#define TSWPSTYLEDIFF_H

@class TSSStyleDiff, TSSStylePropertyChangeSet, TSSStyle;



@interface TSWPStyleDiff : TSSStyleDiff {
    BOOL _definedChangeSet;
    BOOL _definedStyle;
}


@property (retain, nonatomic) TSSStylePropertyChangeSet *changeSet; // ivar: _changeSet
@property (retain, nonatomic) TSSStylePropertyChangeSet *previouslyAppliedChangeSet; // ivar: _previouslyAppliedChangeSet
@property (retain, nonatomic) TSSStyle *style; // ivar: _style


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStyleDiff:(id)arg0 ;
-(NSUInteger)hash;
-(id)changedPropertyNames:(id)arg0 ;
-(id)description;
-(id)initWithContext:(id)arg0 changeSet:(id)arg1 ;
-(id)initWithContext:(id)arg0 style:(id)arg1 ;
-(id)styleDiffForTable:(NSUInteger)arg0 storage:(id)arg1 currentObject:(id)arg2 ;
-(void)didInitFromSOS;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif