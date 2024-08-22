// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGPATTERNDATAFILE_H
#define SGPATTERNDATAFILE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SGPatternDataFile : NSObject {
    NSData *_fileData;
}




-(id)dataForOffset:(id)arg0 ;
-(id)dataForOffset:(id)arg0 includeTerminator:(int)arg1 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;


@end


#endif