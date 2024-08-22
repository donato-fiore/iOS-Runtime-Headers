// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSALOGWRITERESULT_H
#define OSALOGWRITERESULT_H

@class NSError, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "OSALogIdentity.h"

@interface OSALogWriteResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSString *filePath; // ivar: _filePath
@property (readonly, nonatomic) OSALogIdentity *identity; // ivar: _identity


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 error:(id)arg1 ;
-(id)initWithIdentity:(id)arg0 filePath:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif