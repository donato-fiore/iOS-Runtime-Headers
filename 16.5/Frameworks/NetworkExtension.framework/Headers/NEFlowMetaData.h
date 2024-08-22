// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEFLOWMETADATA_H
#define NEFLOWMETADATA_H

@class NSUUID, NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding>



@property (readonly) BOOL fastOpenRequested; // ivar: _fastOpenRequested
@property (readonly) NSUUID *filterFlowIdentifier; // ivar: _filterFlowIdentifier
@property (readonly) BOOL multipathRequested; // ivar: _multipathRequested
@property (readonly) NSData *sourceAppAuditToken; // ivar: _sourceAppAuditToken
@property (readonly) NSString *sourceAppSigningIdentifier; // ivar: _sourceAppSigningIdentifier
@property (readonly) NSData *sourceAppUniqueIdentifier; // ivar: _sourceAppUniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif