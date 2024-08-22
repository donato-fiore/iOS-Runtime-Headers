// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ESDATAHANDLER_H
#define ESDATAHANDLER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ESDataHandler : NSObject

@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (copy, nonatomic) NSString *changeTrackingID; // ivar: _changeTrackingID
@property (nonatomic) *void container; // ivar: _container


+(id)newDataHandlerForDataclass:(NSInteger)arg0 container:(*void)arg1 changeTrackingID:(id)arg2 accountID:(id)arg3 ;
-(*void)copyLocalObjectFromId:(int)arg0 ;
-(BOOL)closeDBAndSave:(BOOL)arg0 ;
-(BOOL)saveContainer;
-(BOOL)wipeServerIds;
-(NSInteger)dataclass;
-(id)copyOfAllLocalObjectsInContainer;
-(id)getDAExceptionObjectWithLocalItem:(*void)arg0 originalEvent:(id)arg1 account:(id)arg2 ;
-(id)getDAObjectWithLocalItem:(*void)arg0 serverId:(id)arg1 account:(id)arg2 ;
-(id)initWithContainer:(*void)arg0 changeTrackingID:(id)arg1 accountID:(id)arg2 ;
-(int)getIdFromLocalObject:(*void)arg0 ;
-(void)dealloc;
-(void)drainContainer;
-(void)drainSuperfluousChanges;
-(void)openDB;


@end


#endif