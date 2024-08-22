// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCALLDIRECTORYEXTENSION_H
#define CXCALLDIRECTORYEXTENSION_H

@class NSString, LSPlugInKitProxy;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CXCallDirectoryExtension : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *localizedContainingAppName; // ivar: _localizedContainingAppName
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (nonatomic, getter=isOnlyExtensionInContainingApp) BOOL onlyExtensionInContainingApp; // ivar: _onlyExtensionInContainingApp
@property (retain, nonatomic) LSPlugInKitProxy *plugInKitProxy; // ivar: _plugInKitProxy
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) NSInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif