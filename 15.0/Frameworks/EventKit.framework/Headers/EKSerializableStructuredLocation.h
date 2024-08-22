// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKSERIALIZABLESTRUCTUREDLOCATION_H
#define EKSERIALIZABLESTRUCTUREDLOCATION_H

@class CalLocation;


#import "EKSerializableObject.h"

@interface EKSerializableStructuredLocation : EKSerializableObject

@property (copy, nonatomic) CalLocation *calLocation; // ivar: _calLocation


+(id)classesForKey;
-(id)createStructuredLocation;
-(id)initWithStructuredLocation:(id)arg0 ;


@end


#endif