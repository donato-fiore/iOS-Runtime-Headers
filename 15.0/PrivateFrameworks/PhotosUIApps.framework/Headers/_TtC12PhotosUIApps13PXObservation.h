// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12PHOTOSUIAPPS13PXOBSERVATION_H
#define _TTC12PHOTOSUIAPPS13PXOBSERVATION_H

@protocol PXChangeObserver;

#import <Foundation/Foundation.h>


@interface _TtC12PhotosUIApps13PXObservation : NSObject <PXChangeObserver>

 {
    ? observable;
    ? changeHandler;
}




-(id)init;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif