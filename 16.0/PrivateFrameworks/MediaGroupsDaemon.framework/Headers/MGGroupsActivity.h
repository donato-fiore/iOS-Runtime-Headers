// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MGGROUPSACTIVITY_H
#define MGGROUPSACTIVITY_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface MGGroupsActivity : NSObject

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDate *when; // ivar: _when


-(id)description;
-(id)initWithName:(id)arg0 ;


@end


#endif