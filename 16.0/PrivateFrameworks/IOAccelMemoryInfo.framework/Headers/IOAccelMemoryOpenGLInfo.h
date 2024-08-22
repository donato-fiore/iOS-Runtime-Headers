// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOACCELMEMORYOPENGLINFO_H
#define IOACCELMEMORYOPENGLINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IOAccelMemoryOpenGLInfo : NSObject {
    id *_expansionData;
}


@property int blamedProcess; // ivar: blamedProcess
@property (retain) NSString *debugLabel; // ivar: debugLabel
@property int name; // ivar: name
@property (retain) NSString *objectDescription; // ivar: objectDescription
@property NSUInteger objectType; // ivar: objectType
@property int pid; // ivar: pid
@property (retain) NSString *sharegroup; // ivar: sharegroup


-(id)description;
-(void)dealloc;


@end


#endif