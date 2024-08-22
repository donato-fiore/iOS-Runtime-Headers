// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSEGMENTEDCONTROLVALUE_H
#define WFSEGMENTEDCONTROLVALUE_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface WFSegmentedControlValue : NSObject

@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) id *representedObject; // ivar: _representedObject


+(id)valueWithDisplayName:(id)arg0 ;
+(id)valueWithDisplayName:(id)arg0 representedObject:(id)arg1 ;
+(id)valueWithImage:(id)arg0 ;
+(id)valueWithImage:(id)arg0 representedObject:(id)arg1 ;
-(id)initWithDisplayName:(id)arg0 image:(id)arg1 representedObject:(id)arg2 ;


@end


#endif