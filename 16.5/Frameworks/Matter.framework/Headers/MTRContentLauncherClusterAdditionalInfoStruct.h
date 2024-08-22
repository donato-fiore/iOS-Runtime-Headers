// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCONTENTLAUNCHERCLUSTERADDITIONALINFOSTRUCT_H
#define MTRCONTENTLAUNCHERCLUSTERADDITIONALINFOSTRUCT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRContentLauncherClusterAdditionalInfoStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *value; // ivar: _value


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif