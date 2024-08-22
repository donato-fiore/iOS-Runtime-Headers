// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AEGRIDOVERLAYCONFIGURATION_H
#define AEGRIDOVERLAYCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface AEGridOverlayConfiguration : NSObject

@property (readonly, nonatomic) BOOL showCloudDecoration; // ivar: _showCloudDecoration
@property (readonly, nonatomic) BOOL showLoopDecoration; // ivar: _showLoopDecoration
@property (readonly, nonatomic) BOOL showVideoDecoration; // ivar: _showVideoDecoration


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithShowCloudDecoration:(BOOL)arg0 showVideoDecoration:(BOOL)arg1 showLoopDecoration:(BOOL)arg2 ;


@end


#endif