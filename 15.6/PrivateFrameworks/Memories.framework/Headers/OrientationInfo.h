// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ORIENTATIONINFO_H
#define ORIENTATIONINFO_H

@class NSString;
@protocol AltAspect;

#import <Foundation/Foundation.h>


@interface OrientationInfo : NSObject <AltAspect>



@property (nonatomic) CGFloat altAspect; // ivar: _altAspect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int inputID; // ivar: _inputID
@property (nonatomic) BOOL isRotated; // ivar: _isRotated
@property (readonly) Class superclass;




@end


#endif