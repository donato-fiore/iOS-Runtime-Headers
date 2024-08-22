// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBMUTABLEDESCRIPTOR_H
#define CBMUTABLEDESCRIPTOR_H

@class NSNumber;


#import "CBDescriptor.h"

@interface CBMutableDescriptor : CBDescriptor

@property (retain) NSNumber *ID; // ivar: _ID


-(id)description;
-(id)initWithCharacteristic:(id)arg0 dictionary:(id)arg1 ;
-(id)initWithType:(id)arg0 value:(id)arg1 ;


@end


#endif