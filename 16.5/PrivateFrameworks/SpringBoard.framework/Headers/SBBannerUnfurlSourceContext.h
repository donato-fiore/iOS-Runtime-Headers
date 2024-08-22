// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBANNERUNFURLSOURCECONTEXT_H
#define SBBANNERUNFURLSOURCECONTEXT_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBBannerUnfurlSourceContext : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) CGRect referenceCoordinateSpaceBounds; // ivar: _referenceCoordinateSpaceBounds
@property (readonly, nonatomic) CGRect referenceFrame; // ivar: _referenceFrame
@property (readonly, nonatomic) CGPoint referenceVelocity; // ivar: _referenceVelocity


-(id)_copyWithClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif