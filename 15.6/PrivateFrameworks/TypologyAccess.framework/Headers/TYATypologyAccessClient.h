// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TYATYPOLOGYACCESSCLIENT_H
#define TYATYPOLOGYACCESSCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface TYATypologyAccessClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(BOOL)removeAllTypologyFilesWithError:(*id)arg0 ;
-(BOOL)removeTypologyFileWithURLHandle:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeData:(id)arg0 toTypologyFileWithName:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithAccessMode:(NSUInteger)arg0 ;
-(void)_disconnect;
-(void)_initializeConnection;
-(void)_setTypologyAccessMode:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)enumerateTypologyLogs:(id)arg0 ;


@end


#endif