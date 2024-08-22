// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOACCELMEMORYOPENCLINFO_H
#define IOACCELMEMORYOPENCLINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IOAccelMemoryOpenCLInfo : NSObject {
    id *_expansionData;
}


@property (retain) NSString *cl_context; // ivar: cl_context
@property NSUInteger cl_mem; // ivar: cl_mem
@property (retain) NSString *objectDescription; // ivar: objectDescription
@property (retain) NSString *objectType; // ivar: objectType
@property int pid; // ivar: pid


-(id)description;
-(void)dealloc;


@end


#endif