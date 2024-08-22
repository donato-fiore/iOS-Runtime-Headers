// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGDATABASEJOURNALFILE_H
#define SGDATABASEJOURNALFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SGDatabaseJournalFile : NSObject {
    NSString *_path;
    NSUInteger _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}




-(id)description;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)read;
-(void)clear;
-(void)dealloc;
-(void)destroy;
-(void)destroyAndUnlinkIfEmpty;
-(void)unlink;
-(void)write:(id)arg0 ;


@end


#endif