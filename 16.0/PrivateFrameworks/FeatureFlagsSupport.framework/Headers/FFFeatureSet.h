// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FFFEATURESET_H
#define FFFEATURESET_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FFFeatureSetIdentifier.h"

@interface FFFeatureSet : NSObject

@property (retain, nonatomic) NSArray *features; // ivar: _features
@property (readonly, nonatomic) FFFeatureSetIdentifier *identifier; // ivar: _identifier


-(id)initWithGroup:(id)arg0 set:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif