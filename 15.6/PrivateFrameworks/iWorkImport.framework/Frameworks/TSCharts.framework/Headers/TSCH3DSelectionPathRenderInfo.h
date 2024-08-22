// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DSELECTIONPATHRENDERINFO_H
#define TSCH3DSELECTIONPATHRENDERINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSCH3DSelectionPathRenderInfo : NSObject

@property (readonly, nonatomic) CGFloat rotation; // ivar: _rotation
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) NSUInteger styleIndex; // ivar: _styleIndex


+(id)renderInfoWithString:(id)arg0 styleIndex:(NSUInteger)arg1 rotation:(CGFloat)arg2 ;
-(id)initWithString:(id)arg0 styleIndex:(NSUInteger)arg1 rotation:(CGFloat)arg2 ;


@end


#endif