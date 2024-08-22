// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSOPENMAILCOMPOSEVIEWCONTROLLERCONTEXT_H
#define MSOPENMAILCOMPOSEVIEWCONTROLLERCONTEXT_H

@class NSArray, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSOpenMailComposeViewControllerContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (readonly, nonatomic) NSString *autosaveIdentifier; // ivar: _autosaveIdentifier
@property (retain, nonatomic) NSDictionary *compositionValues; // ivar: _compositionValues
@property (retain, nonatomic) NSString *hostApplicationBundleIdentifier; // ivar: _hostApplicationBundleIdentifier


+(BOOL)supportsSecureCoding;
+(id)unarchiveFromData:(id)arg0 error:(*id)arg1 ;
-(id)initWithAutosaveIdentifier:(id)arg0 compositionValues:(id)arg1 attachments:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif