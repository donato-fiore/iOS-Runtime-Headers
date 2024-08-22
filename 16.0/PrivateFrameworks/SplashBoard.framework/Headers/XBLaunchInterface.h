// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XBLAUNCHINTERFACE_H
#define XBLAUNCHINTERFACE_H

@class NSString, NSArray;
@protocol BSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "XBLaunchInterfaceConfiguration.h"

@interface XBLaunchInterface : NSObject <BSXPCCoding, NSSecureCoding>



@property (nonatomic, getter=_isDefault) BOOL _default; // ivar: _default
@property (readonly, nonatomic) XBLaunchInterfaceConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isConfiguration;
@property (readonly, nonatomic) BOOL isStoryboard;
@property (readonly, nonatomic) BOOL isXIB;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSArray *urlSchemes; // ivar: _urlSchemes


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 identifier:(id)arg1 urlSchemes:(id)arg2 isDefault:(BOOL)arg3 ;
-(id)initWithType:(NSUInteger)arg0 name:(id)arg1 identifier:(id)arg2 urlSchemes:(id)arg3 isDefault:(BOOL)arg4 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif