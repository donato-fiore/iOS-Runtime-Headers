// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMBDIRENTRY_H
#define SMBDIRENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SMBDirEntry : NSObject

@property smbfattr attributes; // ivar: _attributes
@property (copy) NSString *name; // ivar: _name
@property unsigned int ntstatus; // ivar: _ntstatus




@end


#endif