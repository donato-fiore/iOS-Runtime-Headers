// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCVIRTUALCONTROLLERELEMENTCONFIGURATION_H
#define GCVIRTUALCONTROLLERELEMENTCONFIGURATION_H

@class UIBezierPath;

#import <Foundation/Foundation.h>


@interface GCVirtualControllerElementConfiguration : NSObject

@property (nonatomic) BOOL actsAsTouchpad; // ivar: _actsAsTouchpad
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) UIBezierPath *path; // ivar: _path


-(id)init;


@end


#endif