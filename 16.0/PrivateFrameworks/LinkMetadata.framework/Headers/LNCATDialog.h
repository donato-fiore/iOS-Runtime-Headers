// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNCATDIALOG_H
#define LNCATDIALOG_H

@class NSString, NSDictionary, NSData, NSURL;
@protocol NSSecureCoding;


#import "LNDialog.h"

@interface LNCATDialog : LNDialog <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (retain, nonatomic) NSData *securityScopeData; // ivar: _securityScopeData
@property (readonly, copy, nonatomic) NSURL *templateDirectoryURL; // ivar: _templateDirectoryURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 templateDirectoryURL:(id)arg1 parameters:(id)arg2 localeIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif