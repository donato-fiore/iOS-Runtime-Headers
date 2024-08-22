// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GDSBALANCINGAUTHORITYOUTPUT_H
#define _GDSBALANCINGAUTHORITYOUTPUT_H

@class NSUUID, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface _GDSBalancingAuthorityOutput : NSObject

@property (readonly, nonatomic) NSUUID *ID; // ivar: _ID
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (readonly, nonatomic) CGFloat latEnd; // ivar: _latEnd
@property (readonly, nonatomic) CGFloat latStart; // ivar: _latStart
@property (readonly, nonatomic) CGFloat longEnd; // ivar: _longEnd
@property (readonly, nonatomic) CGFloat longStart; // ivar: _longStart
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)initWithID:(id)arg0 name:(id)arg1 updateDate:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 latitudeStart:(CGFloat)arg2 latitudeEnd:(CGFloat)arg3 longitudeStart:(CGFloat)arg4 longitudeEnd:(CGFloat)arg5 updateDate:(id)arg6 ;


@end


#endif