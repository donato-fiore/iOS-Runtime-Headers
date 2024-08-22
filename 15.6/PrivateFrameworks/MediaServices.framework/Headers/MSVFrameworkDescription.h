// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVFRAMEWORKDESCRIPTION_H
#define MSVFRAMEWORKDESCRIPTION_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface MSVFrameworkDescription : NSObject

@property (readonly, nonatomic, getter=isDebug) BOOL debug; // ivar: _debug
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isRoot) BOOL root; // ivar: _root
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)description;
-(id)initWithName:(id)arg0 uuid:(id)arg1 root:(BOOL)arg2 debug:(BOOL)arg3 ;


@end


#endif