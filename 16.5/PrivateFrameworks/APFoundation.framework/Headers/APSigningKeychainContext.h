// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSIGNINGKEYCHAINCONTEXT_H
#define APSIGNINGKEYCHAINCONTEXT_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface APSigningKeychainContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *contextRef; // ivar: _contextRef
@property (retain, nonatomic) NSNumber *isStashed; // ivar: _isStashed
@property (retain, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContextRef:(id)arg0 sessionIdentifier:(id)arg1 isStashed:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif