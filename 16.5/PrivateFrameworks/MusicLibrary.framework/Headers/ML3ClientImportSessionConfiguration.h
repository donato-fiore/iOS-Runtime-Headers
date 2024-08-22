// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3CLIENTIMPORTSESSIONCONFIGURATION_H
#define ML3CLIENTIMPORTSESSIONCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ML3DatabasePrivacyContext.h"

@interface ML3ClientImportSessionConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL allowAccountMerging; // ivar: _allowAccountMerging
@property (copy, nonatomic) NSString *libraryPath; // ivar: _libraryPath
@property (nonatomic) NSUInteger operationCount; // ivar: _operationCount
@property (nonatomic) ML3DatabasePrivacyContext *privacyContext; // ivar: _privacyContext
@property (nonatomic) int sourceType; // ivar: _sourceType


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif