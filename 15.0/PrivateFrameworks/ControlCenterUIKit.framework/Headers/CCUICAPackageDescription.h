// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUICAPACKAGEDESCRIPTION_H
#define CCUICAPACKAGEDESCRIPTION_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface CCUICAPackageDescription : NSObject

@property (nonatomic) BOOL flipsForRightToLeftLayoutDirection; // ivar: _flipsForRightToLeftLayoutDirection
@property (readonly, copy, nonatomic) NSURL *packageURL; // ivar: _packageURL


+(id)descriptionForPackageNamed:(id)arg0 inBundle:(id)arg1 ;
-(id)initWithPackageName:(id)arg0 inBundle:(id)arg1 ;


@end


#endif