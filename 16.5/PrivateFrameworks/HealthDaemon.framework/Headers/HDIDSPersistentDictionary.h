// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDIDSPERSISTENTDICTIONARY_H
#define HDIDSPERSISTENTDICTIONARY_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "HDSQLiteDatabase.h"

@interface HDIDSPersistentDictionary : NSObject {
    Class _objectClass;
    NSURL *_databaseURL;
    HDSQLiteDatabase *_database;
}




-(id)initWithURL:(id)arg0 objectClass:(Class)arg1 ;
-(id)messageIDsForPendingOutgoingMessagesWithType:(int)arg0 deviceID:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;
-(void)didCancel:(id)arg0 ;
-(void)didFinishSending:(id)arg0 ;
-(void)didReceiveError:(id)arg0 forMessageID:(id)arg1 ;
-(void)didReceiveRequest:(id)arg0 deviceID:(id)arg1 type:(int)arg2 length:(NSInteger)arg3 ;
-(void)didReceiveResponse:(id)arg0 toRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(NSInteger)arg4 ;
-(void)didSendRequest:(id)arg0 deviceID:(id)arg1 type:(int)arg2 length:(NSInteger)arg3 ;
-(void)didSendResponse:(id)arg0 toRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(NSInteger)arg4 ;
-(void)enumerateObjectsSortedByExpirationDate:(id)arg0 ;
-(void)invalidate;
-(void)obliterateWithReason:(id)arg0 preserveCopy:(BOOL)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 expires:(CGFloat)arg2 ;


@end


#endif