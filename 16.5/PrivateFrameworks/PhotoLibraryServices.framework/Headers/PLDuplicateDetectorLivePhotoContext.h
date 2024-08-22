// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDUPLICATEDETECTORLIVEPHOTOCONTEXT_H
#define PLDUPLICATEDETECTORLIVEPHOTOCONTEXT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLDuplicateDetectorLivePhotoContext : NSObject {
    NSMutableDictionary *_container;
}




-(BOOL)hasFingerprint:(id)arg0 contextData:(id)arg1 ;
-(id)description;
-(id)init;
-(void)addFingerprint:(id)arg0 contextData:(id)arg1 ;


@end


#endif