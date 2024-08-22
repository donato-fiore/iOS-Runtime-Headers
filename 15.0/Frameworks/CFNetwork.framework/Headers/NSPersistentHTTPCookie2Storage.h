// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPERSISTENTHTTPCOOKIE2STORAGE_H
#define NSPERSISTENTHTTPCOOKIE2STORAGE_H

@class NSString, NSURL;
@protocol NSInternalHTTPCookie2Storage;

#import <Foundation/Foundation.h>


@interface NSPersistentHTTPCookie2Storage : NSObject <NSInternalHTTPCookie2Storage>

 {
    *sqlite3 persistentDb;
    *sqlite3_stmt insertCookiesStmt;
    *sqlite3_stmt selectDomainCookiesStmt;
    *sqlite3_stmt selectAllCookiesStmt;
    *sqlite3_stmt deleteCookiesStmt;
    *sqlite3_stmt deleteAllCookiesStmt;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSURL *path; // ivar: _path
@property (readonly) Class superclass;


-(id)getAllCookies;
-(id)getCookiesWithFilter:(id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)beginTransaction;
-(void)commitTransaction;
-(void)deleteAllCookies;
-(void)deleteCookie:(id)arg0 ;
-(void)deleteCookies:(id)arg0 ;
-(void)deleteCookiesWithFilter:(id)arg0 ;
-(void)setCookie:(id)arg0 ;
-(void)setCookies:(id)arg0 ;


@end


#endif