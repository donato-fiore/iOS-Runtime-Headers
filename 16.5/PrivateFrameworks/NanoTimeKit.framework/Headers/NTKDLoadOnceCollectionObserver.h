// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKDLOADONCECOLLECTIONOBSERVER_H
#define NTKDLOADONCECOLLECTIONOBSERVER_H

@class NSMutableArray, NSString;
@protocol NTKFaceCollectionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKFaceCollection.h"

@interface NTKDLoadOnceCollectionObserver : NSObject <NTKFaceCollectionObserver>

 {
    NTKFaceCollection *_collection;
    NSMutableArray *_handlers;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasLoaded;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCollection:(id)arg0 ;
-(void)faceCollectionDidLoad:(id)arg0 ;
-(void)performOnLoad:(id)arg0 ;


@end


#endif