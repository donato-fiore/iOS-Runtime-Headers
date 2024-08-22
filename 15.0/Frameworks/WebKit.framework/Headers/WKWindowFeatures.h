// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKWINDOWFEATURES_H
#define WKWINDOWFEATURES_H

@class NSNumber, NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKWindowFeatures : NSObject <WKObject>

 {
    ObjectStorage<API::WindowFeatures> _windowFeatures;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) NSNumber *_dialogDisplay;
@property (readonly, nonatomic) NSNumber *_fullscreenDisplay;
@property (readonly, nonatomic) NSNumber *_locationBarVisibility;
@property (readonly, nonatomic) NSNumber *_scrollbarsVisibility;
@property (readonly, nonatomic) NSNumber *allowsResizing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *height;
@property (readonly, nonatomic) NSNumber *menuBarVisibility;
@property (readonly, nonatomic) NSNumber *statusBarVisibility;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *toolbarsVisibility;
@property (readonly, nonatomic) NSNumber *width;
@property (readonly, nonatomic) NSNumber *x;
@property (readonly, nonatomic) NSNumber *y;


-(void)dealloc;


@end


#endif