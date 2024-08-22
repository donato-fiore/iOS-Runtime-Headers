// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIFAVORITESREQUESTMANAGER_H
#define VUIFAVORITESREQUESTMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VUIFavoritesRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ongoingEntityIDOperationDictionary; // ivar: _ongoingEntityIDOperationDictionary


+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)sendRequestForEntityID:(id)arg0 teamName:(id)arg1 action:(NSUInteger)arg2 ;


@end


#endif