// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSAPPLICATIONISINSTALLEDQUERY_H
#define _LSAPPLICATIONISINSTALLEDQUERY_H

@class LSQuery, NSString;



@interface _LSApplicationIsInstalledQuery : LSQuery

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


+(BOOL)supportsSecureCoding;
+(id)queryWithBundleIdentifier:(id)arg0 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateWithXPCConnection:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif