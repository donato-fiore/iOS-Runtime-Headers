// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXAPPSCENEREPRESENTATION_H
#define AXAPPSCENEREPRESENTATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXAppSceneRepresentation : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *fbSceneIdentifier; // ivar: _fbSceneIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 fbSceneIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif