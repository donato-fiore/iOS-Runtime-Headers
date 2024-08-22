// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFMANAGEDSTORAGECONNECTION_H
#define AFMANAGEDSTORAGECONNECTION_H

@class NSXPCConnection, NSString;
@protocol AFManagedStore;

#import <Foundation/Foundation.h>


@interface AFManagedStorageConnection : NSObject <AFManagedStore>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_connection;
-(id)_managedStoreService;
-(id)_managedStoreServiceWithErrorHandler:(id)arg0 ;
-(id)_synchronousManagedStoreServiceWithErrorHandler:(id)arg0 ;
-(id)dataForKey:(id)arg0 inKnowledgeStoreWithName:(id)arg1 ;
-(id)domainObjectForKey:(id)arg0 ;
-(void)_clearConnection;
-(void)dealloc;
-(void)resetKnowledgeStoreWithName:(id)arg0 ;
-(void)setData:(id)arg0 forKey:(id)arg1 inKnowledgeStoreWithName:(id)arg2 ;
-(void)setDomainObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif