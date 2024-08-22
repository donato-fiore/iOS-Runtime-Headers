// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LASECACCESSCONTROL_H
#define LASECACCESSCONTROL_H


#import <Foundation/Foundation.h>


@interface LASecAccessControl : NSObject



+(id)constraintsFromACL:(struct __SecAccessControl *)arg0 ;
+(id)serializeACL:(struct __SecAccessControl *)arg0 ;
+(struct __SecAccessControl *)allowAllACL;
+(struct __SecAccessControl *)denyAllACL;
+(struct __SecAccessControl *)deserializeACL:(id)arg0 ;


@end


#endif