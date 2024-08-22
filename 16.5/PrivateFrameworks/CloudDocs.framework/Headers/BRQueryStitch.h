// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRQUERYSTITCH_H
#define BRQUERYSTITCH_H

@class NSURL, NSArray;

#import <Foundation/Foundation.h>

#import "BRFileObjectID.h"

@interface BRQueryStitch : NSObject {
    BRFileObjectID *_objid;
    char _kind;
    NSURL *_url;
}


@property (retain, nonatomic) NSArray *contexts; // ivar: _contexts
@property (retain, nonatomic) NSURL *fromURL; // ivar: _fromURL


-(id)description;
-(id)initWithURL:(id)arg0 objid:(id)arg1 kind:(char)arg2 ;
-(void)_creationDone;
-(void)_deletionDone;
-(void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
-(void)_renameDone;
-(void)dealloc;
-(void)done;
-(void)setQueries:(id)arg0 ;


@end


#endif