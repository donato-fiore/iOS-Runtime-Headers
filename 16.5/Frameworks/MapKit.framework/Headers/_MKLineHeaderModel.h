// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKLINEHEADERMODEL_H
#define _MKLINEHEADERMODEL_H

@class NSMutableArray, NSDictionary, UIView;

#import <Foundation/Foundation.h>


@interface _MKLineHeaderModel : NSObject {
    NSMutableArray *_tokens;
}


@property (copy, nonatomic) id *colorProvider; // ivar: _colorProvider
@property (copy, nonatomic) NSDictionary *fontAttribute; // ivar: _fontAttribute
@property (weak, nonatomic) UIView *ownerView; // ivar: _ownerView
@property (nonatomic) BOOL shouldUseEmptyPlaceholder; // ivar: _shouldUseEmptyPlaceholder


-(id)_placeCardHeaderSeparatorString;
-(id)contentAttributedString;
-(id)description;
-(id)init;
-(void)addToken:(id)arg0 ;
-(void)insertToken:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeToken:(id)arg0 ;


@end


#endif