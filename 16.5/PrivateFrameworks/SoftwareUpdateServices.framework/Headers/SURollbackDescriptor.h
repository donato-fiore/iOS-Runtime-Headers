// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUROLLBACKDESCRIPTOR_H
#define SUROLLBACKDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SURollbackDescriptor : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *productBuildVersion; // ivar: _productBuildVersion
@property (retain, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (retain, nonatomic) NSString *releaseType; // ivar: _releaseType
@property (retain, nonatomic) NSString *restoreVersion; // ivar: _restoreVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif