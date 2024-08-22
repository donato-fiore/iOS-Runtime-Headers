// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCONTENTLAUNCHERCLUSTERPARAMETER_H
#define MTRCONTENTLAUNCHERCLUSTERPARAMETER_H

@class NSArray, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRContentLauncherClusterParameter : NSObject

@property (retain, nonatomic) NSArray *externalIDList; // ivar: _externalIDList
@property (retain, nonatomic) NSNumber *type; // ivar: _type
@property (retain, nonatomic) NSString *value; // ivar: _value


-(id)description;
-(id)init;


@end


#endif