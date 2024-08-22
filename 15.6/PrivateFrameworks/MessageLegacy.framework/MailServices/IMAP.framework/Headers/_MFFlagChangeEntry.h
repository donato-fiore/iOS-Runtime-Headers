// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFFLAGCHANGEENTRY_H
#define _MFFLAGCHANGEENTRY_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface _MFFlagChangeEntry : NSObject

@property (readonly) NSDictionary *changes; // ivar: changes
@property CGFloat commitTime; // ivar: commitTime
@property unsigned int connectionTag; // ivar: connectionTag
@property (readonly) NSString *path; // ivar: path
@property (readonly) unsigned int uid; // ivar: uid


-(id)initWithPath:(id)arg0 UID:(unsigned int)arg1 changes:(id)arg2 ;
-(void)dealloc;


@end


#endif