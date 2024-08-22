// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXHORIZONTALSTACKLAYOUT_H
#define SXHORIZONTALSTACKLAYOUT_H

@class NSString, NSMutableDictionary;
@protocol SXHorizontalStackLayout;

#import <Foundation/Foundation.h>


@interface SXHorizontalStackLayout : NSObject <SXHorizontalStackLayout>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *positions; // ivar: _positions
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *widths; // ivar: _widths


-(CGFloat)positionForIdentifier:(id)arg0 ;
-(CGFloat)widthForIdentifier:(id)arg0 ;
-(id)init;
-(void)setPosition:(CGFloat)arg0 forIdentifier:(id)arg1 ;
-(void)setWidth:(CGFloat)arg0 forIdentifier:(id)arg1 ;


@end


#endif