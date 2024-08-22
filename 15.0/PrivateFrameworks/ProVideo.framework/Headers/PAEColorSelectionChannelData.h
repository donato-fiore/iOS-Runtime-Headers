// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAECOLORSELECTIONCHANNELDATA_H
#define PAECOLORSELECTIONCHANNELDATA_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PAEColorSelectionChannelData : NSObject <NSSecureCoding, NSCopying>



@property int action; // ivar: _action
@property CGFloat frame; // ivar: _frame
@property int mode; // ivar: _mode
@property CGFloat radius; // ivar: _radius
@property CGFloat radiusScale; // ivar: _radiusScale
@property int state; // ivar: _state
@property int style; // ivar: _style
@property int timeScale; // ivar: _timeScale
@property CGFloat x; // ivar: _x
@property CGFloat y; // ivar: _y


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif