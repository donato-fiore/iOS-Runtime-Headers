// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEDICALIDCHANGEOBSERVER_H
#define MEDICALIDCHANGEOBSERVER_H

@protocol MedicalIDChangeObserverDelegate;

#import <Foundation/Foundation.h>


@interface MedicalIDChangeObserver : NSObject {
    int _medicalIDChangedToken;
}


@property (weak, nonatomic) NSObject<MedicalIDChangeObserverDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)dealloc;
-(void)startObservingChanges;


@end


#endif