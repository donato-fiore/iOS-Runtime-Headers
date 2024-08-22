// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ESPRESSODATAFRAMEMAPPEDFILE_H
#define ESPRESSODATAFRAMEMAPPEDFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EspressoDataFrameMappedFile : NSObject {
    int file_id;
    NSUInteger length;
}


@property char * basePtr; // ivar: _basePtr
@property (retain) NSString *path; // ivar: _path


-(id)initWithPath:(id)arg0 ;
-(void)dealloc;


@end


#endif