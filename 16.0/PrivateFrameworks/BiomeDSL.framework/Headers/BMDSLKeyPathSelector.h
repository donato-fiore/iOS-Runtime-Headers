// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDSLKEYPATHSELECTOR_H
#define BMDSLKEYPATHSELECTOR_H

@class NSArray;
@protocol BMDSLArgumentSelector;


#import "BMDSLBaseCodable.h"

@interface BMDSLKeyPathSelector : BMDSLBaseCodable <BMDSLArgumentSelector>



@property (readonly, copy, nonatomic) NSArray *keyPaths; // ivar: _keyPaths


+(BOOL)supportsSecureCoding;
+(id)withKeyPaths:(id)arg0 ;
-(id)argumentsFromInput:(id)arg0 combinedState:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPaths:(id)arg0 ;
-(id)initWithName:(id)arg0 version:(unsigned int)arg1 keyPaths:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif