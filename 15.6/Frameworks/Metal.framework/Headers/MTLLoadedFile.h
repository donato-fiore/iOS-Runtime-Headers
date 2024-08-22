// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLLOADEDFILE_H
#define MTLLOADEDFILE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MTLLoadedFile : NSObject {
    *void _parent;
    NSInteger _modifiedTimeWhenCached;
    FileIdentifier _identity;
    BOOL _isCached;
}


@property (readonly) NSData *contents; // ivar: _fileData


-(id)initWithData:(id)arg0 parent:(*void)arg1 ;
-(void)dealloc;


@end


#endif