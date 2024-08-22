// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRVIRTUALTOUCHDEVICEDESCRIPTOR_H
#define MRVIRTUALTOUCHDEVICEDESCRIPTOR_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface MRVirtualTouchDeviceDescriptor : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic, getter=isAbsolute) BOOL absolute; // ivar: _absolute
@property (readonly, nonatomic, getter=isIntegratedDisplay) BOOL integratedDisplay; // ivar: _integratedDisplay
@property (readonly, nonatomic) unsigned int screenSize; // ivar: _screenSize


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif