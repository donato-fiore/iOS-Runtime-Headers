// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __RCKEYPATHOBSERVANCE_H
#define __RCKEYPATHOBSERVANCE_H

@class NSString, NSArray;
@protocol RCKeyPathObservance, NSObject;

#import <Foundation/Foundation.h>


@interface __RCKeyPathObservance : NSObject <RCKeyPathObservance>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *keyPaths; // ivar: _keyPaths
@property (weak, nonatomic) NSObject<NSObject> *object; // ivar: _object
@property (copy, nonatomic) id *observer; // ivar: _observer
@property (readonly) Class superclass;


-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)remove;


@end


#endif