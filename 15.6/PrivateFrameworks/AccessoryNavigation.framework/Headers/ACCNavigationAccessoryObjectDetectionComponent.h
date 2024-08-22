// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACCNAVIGATIONACCESSORYOBJECTDETECTIONCOMPONENT_H
#define ACCNAVIGATIONACCESSORYOBJECTDETECTIONCOMPONENT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ACCNavigationAccessoryObjectDetectionComponent : NSObject

@property NSUInteger identifier; // ivar: _identifier
@property BOOL isEnabled; // ivar: _isEnabled
@property (retain) NSString *name; // ivar: _name
@property (retain) NSArray *supportedTypes; // ivar: _supportedTypes


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif