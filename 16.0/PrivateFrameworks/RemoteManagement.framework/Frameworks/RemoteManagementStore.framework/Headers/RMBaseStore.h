// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMBASESTORE_H
#define RMBASESTORE_H

@class NSString, NSURL;
@protocol RMStoreProtocol;

#import <Foundation/Foundation.h>

#import "RMStoreXPCConnection.h"

@interface RMBaseStore : NSObject <RMStoreProtocol>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) BOOL dataSeparated; // ivar: _dataSeparated
@property (nonatomic) BOOL defaultToInteractive; // ivar: _defaultToInteractive
@property (copy, nonatomic) NSURL *enrollmentURL; // ivar: _enrollmentURL
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *personaIdentifier; // ivar: _personaIdentifier
@property (nonatomic) NSInteger scope; // ivar: _scope
@property (copy, nonatomic) NSString *storeDescription; // ivar: _storeDescription
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) RMStoreXPCConnection *xpcConnection; // ivar: _xpcConnection


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToStore:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSInteger)arg1 scope:(NSInteger)arg2 name:(id)arg3 description:(id)arg4 enrollmentURL:(id)arg5 accountIdentifier:(id)arg6 defaultToInteractive:(BOOL)arg7 dataSeparated:(BOOL)arg8 personaIdentifier:(id)arg9 ;
-(void)declarationManifestWithCompletionHandler:(id)arg0 ;
-(void)declarationWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)declarationsWithCompletionHandler:(id)arg0 ;
-(void)declarationsWithTypes:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchDataAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)setShouldInstallConfiguration:(id)arg0 shouldInstall:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif