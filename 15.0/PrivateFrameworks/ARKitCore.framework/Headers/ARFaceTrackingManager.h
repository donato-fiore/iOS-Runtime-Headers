// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARFACETRACKINGMANAGER_H
#define ARFACETRACKINGMANAGER_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface ARFaceTrackingManager : NSObject {
    NSUUID *_singleUserAnchorIdentifier;
}


@property (readonly, nonatomic) NSInteger maximumNumberOfTrackedFaces; // ivar: _maximumNumberOfTrackedFaces


+(BOOL)isSupported;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(id)faceTrackingOptionsFromImageData:(id)arg0 withCallback:(id)arg1 ;
-(id)init;
-(id)initWithMaximumNumberOfTrackedFaces:(NSInteger)arg0 options:(id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(id)processData:(id)arg0 ;
-(void)dealloc;


@end


#endif