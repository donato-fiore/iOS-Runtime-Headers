// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FFFEATUREGROUP_H
#define FFFEATUREGROUP_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface FFFeatureGroup : NSObject

@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (retain, nonatomic) NSString *disclosure; // ivar: _disclosure
@property (retain, nonatomic) NSDictionary *featureSets; // ivar: _featureSets
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)initWithName:(id)arg0 ;


@end


#endif