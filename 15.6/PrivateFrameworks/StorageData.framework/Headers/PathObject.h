// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PATHOBJECT_H
#define PATHOBJECT_H


#import <Foundation/Foundation.h>


@interface PathObject : NSObject

@property (readonly) int len; // ivar: _len
@property (readonly) char * path; // ivar: _path


+(id)pathObjectWithPath:(char *)arg0 component:(char *)arg1 ;
-(id)description;
-(id)initWithPath:(char *)arg0 component:(char *)arg1 ;
-(void)dealloc;


@end


#endif