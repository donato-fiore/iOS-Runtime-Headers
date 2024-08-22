// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFILEPROVIDERITEMVERSION_H
#define NSFILEPROVIDERITEMVERSION_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSFileProviderItemVersion : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *contentVersion; // ivar: _contentVersion
@property (readonly, nonatomic) NSData *metadataVersion; // ivar: _metadataVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentVersion:(id)arg0 metadataVersion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif