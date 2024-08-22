// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONLAYOUTVFLPARSERITEM_H
#define _UICOLLECTIONLAYOUTVFLPARSERITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutVFLParserItem : NSObject

@property (nonatomic) CGFloat fraction; // ivar: _fraction
@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)_parseWithVisualFormat:(id)arg0 ;
-(CGFloat)_fractionForFractionTerm:(id)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 fraction:(CGFloat)arg1 ;
-(id)initWithVisualFormat:(id)arg0 ;


@end


#endif