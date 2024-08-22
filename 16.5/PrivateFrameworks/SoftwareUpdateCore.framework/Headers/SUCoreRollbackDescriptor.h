// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCOREROLLBACKDESCRIPTOR_H
#define SUCOREROLLBACKDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUCoreRollbackDescriptor : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *productBuildVersion; // ivar: _productBuildVersion
@property (retain, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (retain, nonatomic) NSString *releaseType; // ivar: _releaseType
@property (retain, nonatomic) NSString *restoreVersion; // ivar: _restoreVersion
@property (nonatomic) BOOL rollbackEligible; // ivar: _rollbackEligible


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif