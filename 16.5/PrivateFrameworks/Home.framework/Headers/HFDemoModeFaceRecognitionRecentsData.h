// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFDEMOMODEFACERECOGNITIONRECENTSDATA_H
#define HFDEMOMODEFACERECOGNITIONRECENTSDATA_H

@class HMFaceCrop, HMPerson, NSUUID;

#import <Foundation/Foundation.h>


@interface HFDemoModeFaceRecognitionRecentsData : NSObject

@property (retain, nonatomic) HMFaceCrop *faceCrop; // ivar: _faceCrop
@property (retain, nonatomic) HMPerson *person; // ivar: _person
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithPerson:(id)arg0 faceCrop:(id)arg1 ;


@end


#endif