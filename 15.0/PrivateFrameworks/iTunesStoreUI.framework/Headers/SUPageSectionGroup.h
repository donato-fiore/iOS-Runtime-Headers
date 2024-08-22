// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUPAGESECTIONGROUP_H
#define SUPAGESECTIONGROUP_H

@class NSArray, UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUPageSectionGroup : NSObject <NSCopying>



@property (nonatomic) NSInteger defaultSectionIndex; // ivar: _defaultSectionIndex
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (nonatomic) NSInteger tintStyle; // ivar: _tintStyle


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)loadFromDictionary:(id)arg0 ;
-(NSInteger)_sectionStyleForString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSectionsDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif