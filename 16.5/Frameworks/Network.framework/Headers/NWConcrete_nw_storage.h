// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_STORAGE_H
#define NWCONCRETE_NW_STORAGE_H

@class NSString;
@protocol OS_nw_storage, OS_dispatch_queue, OS_nw_dictionary, OS_nw_array;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_storage : NSObject <OS_nw_storage>

 {
    char * path;
    NSObject<OS_dispatch_queue> *queue;
    *sqlite3 db;
    *sqlite3_stmt load_stmt;
    *sqlite3_stmt save_stmt;
    *sqlite3_stmt delete_stmt;
    NSObject<OS_nw_dictionary> *providers;
    NSObject<OS_nw_dictionary> *canvas_cache;
    NSObject<OS_nw_array> *flush_queue;
    nw_storage_chain chain;
    BOOL flush_scheduled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif