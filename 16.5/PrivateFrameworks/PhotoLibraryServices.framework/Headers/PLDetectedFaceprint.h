// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDETECTEDFACEPRINT_H
#define PLDETECTEDFACEPRINT_H

@class NSData;


#import "PLManagedObject.h"
#import "PLDetectedFace.h"

@interface PLDetectedFaceprint : PLManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) PLDetectedFace *face;
@property (nonatomic) int faceprintVersion;


+(id)entityName;


@end


#endif