// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRAUDIOOUTPUTCLUSTEROUTPUTINFO_H
#define MTRAUDIOOUTPUTCLUSTEROUTPUTINFO_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRAudioOutputClusterOutputInfo : NSObject

@property (retain, nonatomic) NSNumber *index; // ivar: _index
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *outputType; // ivar: _outputType


-(id)description;
-(id)init;


@end


#endif