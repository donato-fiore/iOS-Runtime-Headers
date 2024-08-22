// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASDATABASEJOURNALFILE_H
#define _PASDATABASEJOURNALFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PASDatabaseJournalFile : NSObject {
    NSString *_path;
    NSUInteger _len;
    NSUInteger _readCursor;
    int _fd;
    BOOL _written;
    BOOL _dead;
}


@property (readonly, nonatomic) BOOL isAlive;
@property (readonly, nonatomic) BOOL isFullyRead;
@property (readonly, nonatomic) NSUInteger length;


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