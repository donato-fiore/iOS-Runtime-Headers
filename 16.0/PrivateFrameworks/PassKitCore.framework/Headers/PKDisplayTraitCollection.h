// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISPLAYTRAITCOLLECTION_H
#define PKDISPLAYTRAITCOLLECTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKDisplayTraitCollection : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat canvasScale; // ivar: _canvasScale
@property (nonatomic) CGSize canvasSize; // ivar: _canvasSize


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDefaultTraits;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif