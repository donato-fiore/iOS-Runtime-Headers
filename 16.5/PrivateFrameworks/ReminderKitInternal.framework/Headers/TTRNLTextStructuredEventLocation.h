// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTRNLTEXTSTRUCTUREDEVENTLOCATION_H
#define TTRNLTEXTSTRUCTUREDEVENTLOCATION_H


#import <Foundation/Foundation.h>


@interface TTRNLTextStructuredEventLocation : NSObject

@property (nonatomic) NSInteger locationType; // ivar: _locationType
@property (nonatomic) NSInteger proximity; // ivar: _proximity
@property (nonatomic) _NSRange range; // ivar: _range


-(id)description;
-(id)initWithRange:(struct _NSRange )arg0 locationType:(NSInteger)arg1 proximity:(NSInteger)arg2 ;


@end


#endif