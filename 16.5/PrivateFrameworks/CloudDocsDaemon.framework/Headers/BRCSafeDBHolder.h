// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSAFEDBHOLDER_H
#define BRCSAFEDBHOLDER_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "BRCPQLConnection.h"

@interface BRCSafeDBHolder : NSObject {
    NSURL *_databaseURL;
}


@property (readonly, nonatomic) BRCPQLConnection *db; // ivar: _db


+(id)newSafeDBHolder:(id)arg0 withDatabaseURL:(id)arg1 ;
-(BOOL)closeWithError:(*id)arg0 ;
-(void)asyncClose;
-(void)asyncCloseWithCompletionHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif