// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVFRAMEWORKDESCRIPTION_H
#define MSVFRAMEWORKDESCRIPTION_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface MSVFrameworkDescription : NSObject

@property (readonly, nonatomic, getter=isDebug) BOOL debug; // ivar: _debug
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isRoot) BOOL root; // ivar: _root
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSString *version; // ivar: _version


-(id)description;
-(id)initWithName:(id)arg0 uuid:(id)arg1 version:(id)arg2 root:(BOOL)arg3 debug:(BOOL)arg4 ;


@end


#endif