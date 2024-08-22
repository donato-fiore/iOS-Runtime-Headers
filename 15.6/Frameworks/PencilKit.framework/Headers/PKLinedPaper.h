// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKLINEDPAPER_H
#define PKLINEDPAPER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKLinedPaper : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat horizontalInset; // ivar: _horizontalInset
@property (readonly, nonatomic) CGPoint lineSpacing; // ivar: _lineSpacing


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLineSpacing:(struct CGPoint )arg0 horizontalInset:(CGFloat)arg1 ;


@end


#endif