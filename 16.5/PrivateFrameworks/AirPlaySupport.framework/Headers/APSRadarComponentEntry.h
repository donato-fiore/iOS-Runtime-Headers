// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSRADARCOMPONENTENTRY_H
#define APSRADARCOMPONENTENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface APSRadarComponentEntry : NSObject

@property (readonly, nonatomic) NSString *componentID; // ivar: componentID
@property (readonly, nonatomic) NSString *componentName; // ivar: componentName
@property (readonly, nonatomic) NSString *componentVersion; // ivar: componentVersion


+(id)componentEntryWithName:(id)arg0 componentVersion:(id)arg1 componentID:(id)arg2 ;


@end


#endif