// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIACTIONREMOVEFROMPLAYHISTORY_H
#define VUIACTIONREMOVEFROMPLAYHISTORY_H

@class NSString;


#import "VUIAction.h"

@interface VUIActionRemoveFromPlayHistory : VUIAction

@property (retain, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (retain, nonatomic) NSString *deleteID; // ivar: _deleteID
@property (nonatomic) BOOL isContinueWatching; // ivar: _isContinueWatching


-(id)initWithContextData:(id)arg0 isContinueWatching:(BOOL)arg1 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif