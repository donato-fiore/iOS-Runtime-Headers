// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCDATABASERESTOREMANAGER_H
#define BRCDATABASERESTOREMANAGER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface BRCDatabaseRestoreManager : NSObject

@property (retain, nonatomic) NSURL *clientDatabaseURL; // ivar: _clientDatabaseURL
@property (retain, nonatomic) NSURL *userURL; // ivar: _userURL


-(id)initWithUserURL:(id)arg0 ;
-(void)restoreWithCompletionBlock:(id)arg0 ;


@end


#endif