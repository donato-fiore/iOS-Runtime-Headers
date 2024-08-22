// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCONTENTLAUNCHERCLUSTERPARAMETERSTRUCT_H
#define MTRCONTENTLAUNCHERCLUSTERPARAMETERSTRUCT_H

@class NSArray, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRContentLauncherClusterParameterStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *externalIDList; // ivar: _externalIDList
@property (copy, nonatomic) NSNumber *type; // ivar: _type
@property (copy, nonatomic) NSString *value; // ivar: _value


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif