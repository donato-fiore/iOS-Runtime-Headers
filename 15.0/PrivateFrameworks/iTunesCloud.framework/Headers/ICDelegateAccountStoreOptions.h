// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDELEGATEACCOUNTSTOREOPTIONS_H
#define ICDELEGATEACCOUNTSTOREOPTIONS_H

@class NSXPCListenerEndpoint, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICDelegateAccountStoreOptions : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSXPCListenerEndpoint *XPCEndpoint; // ivar: _listenerEndpoint
@property (copy, nonatomic) NSString *XPCServiceName; // ivar: _serviceName
@property (copy, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (nonatomic, getter=isSingleWriter) BOOL singleWriter; // ivar: _singleWriter


+(BOOL)supportsSecureCoding;
+(id)defaultOptionsWithServiceEndpoint:(id)arg0 ;
+(id)defaultOptionsWithServiceName:(id)arg0 ;
+(id)singleWriterOptionsWithDatabasePath:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif