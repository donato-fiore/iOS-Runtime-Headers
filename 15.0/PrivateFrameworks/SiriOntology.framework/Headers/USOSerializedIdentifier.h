// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USOSERIALIZEDIDENTIFIER_H
#define USOSERIALIZEDIDENTIFIER_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USOSerializedIdentifier : NSObject <NSSecureCoding>



@property (readonly) NSString *appBundleId; // ivar: _appBundleId
@property (readonly) NSString *namespaceString; // ivar: _namespaceString
@property NSUInteger nodeIndex; // ivar: _nodeIndex
@property (readonly) NSNumber *probability; // ivar: _probability
@property (readonly) NSNumber *sourceComponent; // ivar: _sourceComponent
@property (readonly) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNodeIndex:(NSUInteger)arg0 value:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3 ;
-(id)initWithNodeIndex:(NSUInteger)arg0 value:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3 probability:(id)arg4 ;
-(id)initWithNodeIndex:(NSUInteger)arg0 value:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3 probability:(id)arg4 sourceComponent:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif