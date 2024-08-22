// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLSANIMATABLEPATHCOLLECTION_H
#define MTLSANIMATABLEPATHCOLLECTION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "MTLSPath.h"

@interface MTLSAnimatablePathCollection : NSObject {
    vector<ControlPoint, std::allocator<ControlPoint>> _controlPointStateVector;
}


@property (nonatomic) *ControlPoint controlPointState; // ivar: _controlPointState
@property (readonly) MTLSPath *defaultPath; // ivar: _defaultPath
@property (readonly) NSMutableDictionary *paths; // ivar: _paths


-(id)initWithDefaultPath:(id)arg0 ;
-(struct ControlPoint *)blendPath:(id)arg0 withPath:(id)arg1 byAmount:(float)arg2 ;
-(void)removePath:(id)arg0 ;
-(void)setPath:(id)arg0 forKey:(id)arg1 ;


@end


#endif