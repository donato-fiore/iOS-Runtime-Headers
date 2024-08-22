// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSCOOKIEDATABASE_H
#define AMSCOOKIEDATABASE_H

@class NSString, NSNumber;
@protocol AMSSQLiteConnectionDelegate;

#import <Foundation/Foundation.h>

#import "AMSSQLiteConnection.h"

@interface AMSCookieDatabase : NSObject <AMSSQLiteConnectionDelegate>



@property (readonly, nonatomic) AMSSQLiteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *dsid; // ivar: _dsid
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_dataVaultPathForDSID:(id)arg0 ;
+(id)_databasePathForDSID:(id)arg0 ;
+(id)cookieDatabaseForDSID:(id)arg0 error:(*id)arg1 ;
-(BOOL)_addCookieProperties:(id)arg0 error:(*id)arg1 ;
-(BOOL)_executeStatement:(id)arg0 columns:(id)arg1 forCookieProperties:(id)arg2 error:(*id)arg3 ;
-(BOOL)_removeCookieProperties:(id)arg0 error:(*id)arg1 ;
-(BOOL)connectionNeedsResetForCorruption:(id)arg0 ;
-(BOOL)updateCookiesWithCookiePropertiesToAdd:(id)arg0 cookiePropertiesToRemove:(id)arg1 error:(*id)arg2 ;
-(id)_cookieDictionaryForCursor:(id)arg0 ;
-(id)cookiePropertiesWithError:(*id)arg0 ;
-(id)initWithConnection:(id)arg0 dsid:(id)arg1 ;
-(void)_bindCookieProperties:(id)arg0 column:(NSUInteger)arg1 position:(int)arg2 using:(id)arg3 ;
-(void)close;
-(void)dealloc;


@end


#endif