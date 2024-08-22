// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMWORLDBUILDRESULTOBJECT_H
#define CRKASMWORLDBUILDRESULTOBJECT_H

@class NSArray;
@protocol CRKASMRoster;

#import <Foundation/Foundation.h>


@interface CRKASMWorldBuildResultObject : NSObject

@property (readonly, copy, nonatomic) NSArray *manageableLocations; // ivar: _manageableLocations
@property (readonly, nonatomic) NSObject<CRKASMRoster> *roster; // ivar: _roster


-(id)init;
-(id)initWithRoster:(id)arg0 manageableLocations:(id)arg1 ;


@end


#endif