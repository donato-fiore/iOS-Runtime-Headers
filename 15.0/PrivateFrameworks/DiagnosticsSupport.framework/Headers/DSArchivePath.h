// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DSARCHIVEPATH_H
#define DSARCHIVEPATH_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface DSArchivePath : NSObject

@property (retain, nonatomic) NSString *prefix; // ivar: _prefix
@property (nonatomic) BOOL root; // ivar: _root
@property (retain, nonatomic) NSURL *sourceUrl; // ivar: _sourceUrl


+(id)archivePathWithSource:(id)arg0 prefix:(id)arg1 root:(BOOL)arg2 ;
-(id)initWithSource:(id)arg0 prefix:(id)arg1 root:(BOOL)arg2 ;


@end


#endif