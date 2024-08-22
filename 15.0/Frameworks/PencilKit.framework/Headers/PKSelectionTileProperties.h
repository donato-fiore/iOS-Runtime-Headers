// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSELECTIONTILEPROPERTIES_H
#define PKSELECTIONTILEPROPERTIES_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKSelectionTileProperties : NSObject <NSCopying>



@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (readonly, nonatomic) NSArray *strokes; // ivar: _strokes


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 strokes:(id)arg1 ;


@end


#endif