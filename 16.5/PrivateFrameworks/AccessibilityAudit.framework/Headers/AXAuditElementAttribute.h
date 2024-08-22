// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITELEMENTATTRIBUTE_H
#define AXAUDITELEMENTATTRIBUTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AXAuditElementAttribute : NSObject

@property (copy, nonatomic) NSString *attributeName; // ivar: _attributeName
@property (copy, nonatomic) NSString *developerAPISelector; // ivar: _developerAPISelector
@property (nonatomic) BOOL displayAsTree; // ivar: _displayAsTree
@property (nonatomic) BOOL displayInline; // ivar: _displayInline
@property (copy, nonatomic) NSString *humanReadableName; // ivar: _humanReadableName
@property (nonatomic) BOOL isInternal; // ivar: _isInternal
@property (nonatomic) BOOL isSupported; // ivar: _isSupported
@property (nonatomic) BOOL performsAction; // ivar: _performsAction
@property (nonatomic, getter=isSettable) BOOL settable; // ivar: _settable
@property (nonatomic) NSInteger valueType; // ivar: _valueType


+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif