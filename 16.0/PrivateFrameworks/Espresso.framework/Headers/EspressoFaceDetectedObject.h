// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESPRESSOFACEDETECTEDOBJECT_H
#define ESPRESSOFACEDETECTEDOBJECT_H

@class NSString;
@protocol ExternalDetectedObject;

#import <Foundation/Foundation.h>


@interface EspressoFaceDetectedObject : NSObject <ExternalDetectedObject>



@property CGRect bounds; // ivar: bounds
@property CGPoint center; // ivar: center
@property float confidence; // ivar: confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger objectType; // ivar: objectType
@property (readonly) Class superclass;


-(id)initWithOptionsXloc:(float)arg0 yloc:(float)arg1 size:(float)arg2 confidence:(float)arg3 ;


@end


#endif