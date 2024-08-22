// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIRENDITIONSLICEINFORMATION_H
#define CUIRENDITIONSLICEINFORMATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CUIRenditionSliceInformation : NSObject <NSCopying>

 {
    CGFloat _boundaries;
}


@property (readonly, nonatomic) CGRect destinationRect; // ivar: _destinationRect
@property (readonly, nonatomic) ? edgeInsets; // ivar: _edgeInsets
@property (readonly, nonatomic) NSInteger renditionType; // ivar: _renditionType


-(CGFloat)positionOfSliceBoundary:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRenditionType:(NSInteger)arg0 destinationRect:(struct CGRect )arg1 topLeftInset:(struct CGSize )arg2 bottomRightInset:(struct CGSize )arg3 ;
-(id)initWithSliceInformation:(id)arg0 destinationRect:(struct CGRect )arg1 ;
-(struct CGSize )_bottomRightCapSize;
-(struct CGSize )_topLeftCapSize;


@end


#endif