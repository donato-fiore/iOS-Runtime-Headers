// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FILELOCALXPC_H
#define FILELOCALXPC_H



#import "BackendXPC.h"

@interface FileLocalXPC : BackendXPC



+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 fileOpenFlags:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif