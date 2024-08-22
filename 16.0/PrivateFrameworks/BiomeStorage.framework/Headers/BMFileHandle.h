// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMFILEHANDLE_H
#define BMFILEHANDLE_H

@class NSFileHandle;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BMFileAttributes.h"

@interface BMFileHandle : NSObject <NSSecureCoding>

 {
    BOOL _initialized;
}


@property (readonly, nonatomic) BMFileAttributes *attributes; // ivar: _attributes
@property (readonly, nonatomic) int fd; // ivar: _fd
@property (readonly, nonatomic) NSFileHandle *nsFileHandle;


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)overwriteWithData:(id)arg0 error:(*id)arg1 ;
-(id)_initWithFileDescriptor:(int)arg0 attributes:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileDescriptor:(int)arg0 attributes:(id)arg1 ;
-(id)readDataWithError:(*id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif