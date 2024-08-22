// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKDIAGNOSTICATTRIBUTES_H
#define DKDIAGNOSTICATTRIBUTES_H

@class NSString, NSExtension, NSNumber, NSArray;
@protocol DKExtensionAttributes;

#import <Foundation/Foundation.h>


@interface DKDiagnosticAttributes : NSObject <DKExtensionAttributes>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) NSNumber *freeSpaceRequired; // ivar: _freeSpaceRequired
@property (readonly, nonatomic, getter=isHeadless) BOOL headless; // ivar: _headless
@property (readonly, nonatomic) NSNumber *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL requiresUnlock; // ivar: _requiresUnlock
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted; // ivar: _restricted
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, nonatomic) NSArray *supportedDevices; // ivar: _supportedDevices
@property (readonly, nonatomic) NSString *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualTo:(id)arg0 ;
-(BOOL)isEqualToAttributes:(id)arg0 ;
-(id)initWithExtension:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 version:(id)arg1 freeSpaceRequired:(id)arg2 name:(id)arg3 serviceName:(id)arg4 headless:(BOOL)arg5 ;
-(id)initWithIdentifier:(id)arg0 version:(id)arg1 name:(id)arg2 serviceName:(id)arg3 ;


@end


#endif