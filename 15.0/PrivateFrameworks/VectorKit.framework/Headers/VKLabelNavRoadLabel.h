// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKLABELNAVROADLABEL_H
#define VKLABELNAVROADLABEL_H

@class NSString;
@protocol VKLabelNavFeature;

#import <Foundation/Foundation.h>


@interface VKLabelNavRoadLabel : NSObject {
    int _navLabelType;
    NSString *_displayGroup;
    BOOL _isPicked;
}


@property (nonatomic) unsigned char alignment; // ivar: _alignment
@property (nonatomic) float desiredOffsetDistance; // ivar: _desiredOffsetDistance
@property (nonatomic) unsigned int displayID; // ivar: _displayID
@property (readonly, nonatomic) BOOL isEtaLabel;
@property (readonly, nonatomic) BOOL isJunctionLabel;
@property (readonly, nonatomic) BOOL isManeuverLabel;
@property (readonly, nonatomic) BOOL isRoadLabel;
@property (readonly, nonatomic) BOOL isShieldLabel;
@property (readonly, nonatomic) BOOL isTrafficCameraLabel;
@property (readonly, nonatomic) *void label; // ivar: _label
@property (nonatomic) Mercator2<double> mercatorPoint; // ivar: _mercatorPoint
@property (nonatomic) NSObject<VKLabelNavFeature> *navFeature; // ivar: _navFeature
@property (nonatomic) unsigned short renderOrder;


-(id)description;
-(id)displayGroup;
-(id)initWithNavFeature:(id)arg0 label:(*void)arg1 navLabelType:(int)arg2 ;
-(void)dealloc;
-(void)layoutWithNavContext:(struct NavContext *)arg0 ;


@end


#endif