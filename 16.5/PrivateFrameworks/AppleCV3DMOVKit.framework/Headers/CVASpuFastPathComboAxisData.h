// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVASPUFASTPATHCOMBOAXISDATA_H
#define CVASPUFASTPATHCOMBOAXISDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CVASpuFastPathComboAxisData : NSObject <NSSecureCoding>



@property (nonatomic) int ax; // ivar: _ax
@property (nonatomic) int ay; // ivar: _ay
@property (nonatomic) int az; // ivar: _az
@property (nonatomic) NSUInteger frameId; // ivar: _frameId
@property (nonatomic) int gx; // ivar: _gx
@property (nonatomic) int gy; // ivar: _gy
@property (nonatomic) int gz; // ivar: _gz
@property (nonatomic) unsigned int packetType; // ivar: _packetType
@property (nonatomic) unsigned int sample_id; // ivar: _sample_id
@property (nonatomic) NSUInteger syncTimestamp; // ivar: _syncTimestamp
@property (nonatomic) int temperature; // ivar: _temperature
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) int unfiltered_ax; // ivar: _unfiltered_ax
@property (nonatomic) int unfiltered_ay; // ivar: _unfiltered_ay
@property (nonatomic) int unfiltered_az; // ivar: _unfiltered_az
@property (nonatomic) unsigned int valid_data; // ivar: _valid_data


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif