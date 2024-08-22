// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKASMCOURSECREATEPROPERTIES_H
#define CRKASMCOURSECREATEPROPERTIES_H

@protocol NSCopying, CRKASMLocation;

#import <Foundation/Foundation.h>

#import "CRKASMCourseUpdateProperties.h"

@interface CRKASMCourseCreateProperties : NSObject <NSCopying>



@property (retain, nonatomic) NSObject<CRKASMLocation> *location; // ivar: _location
@property (copy, nonatomic) CRKASMCourseUpdateProperties *updateProperties; // ivar: _updateProperties


-(BOOL)areFulfilledByCourse:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif