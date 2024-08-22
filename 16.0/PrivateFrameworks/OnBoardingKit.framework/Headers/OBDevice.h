// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBDEVICE_H
#define OBDEVICE_H


#import <Foundation/Foundation.h>


@interface OBDevice : NSObject

@property (nonatomic) BOOL hasHomeButton; // ivar: _hasHomeButton
@property (nonatomic) NSUInteger templateType; // ivar: _templateType
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)currentDevice;
-(NSUInteger)templateTypeForBoundsWidth:(CGFloat)arg0 ;


@end


#endif