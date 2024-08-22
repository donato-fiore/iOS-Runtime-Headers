// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSCNNODEMODIFICATIONS_H
#define AVTSCNNODEMODIFICATIONS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVTSCNNodeModifications : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat fieldOfView; // ivar: _fieldOfView
@property (retain, nonatomic) NSString *framingMode; // ivar: _framingMode
@property (nonatomic) NSInteger projectionDirection; // ivar: _projectionDirection
@property (nonatomic) float verticalLensShift; // ivar: _verticalLensShift


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProjectionDirection:(CGFloat)arg0 fieldOfView:(CGFloat)arg1 verticalLensShift:(float)arg2 framingMode:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif