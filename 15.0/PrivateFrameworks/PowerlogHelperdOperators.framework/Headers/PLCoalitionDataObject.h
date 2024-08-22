// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCOALITIONDATAOBJECT_H
#define PLCOALITIONDATAOBJECT_H

@class NSString, NSValue;

#import <Foundation/Foundation.h>


@interface PLCoalitionDataObject : NSObject

@property (retain) NSString *bundleID; // ivar: _bundleID
@property (retain) NSValue *coalStruct; // ivar: _coalStruct
@property NSUInteger coalitionID; // ivar: _coalitionID
@property BOOL isUIKitApp; // ivar: _isUIKitApp
@property (retain) NSString *launchdName; // ivar: _launchdName


-(id)description;
-(void)dealloc;


@end


#endif