// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSUIVIBRANCYLUT_H
#define BSUIVIBRANCYLUT_H

@class NSURL, NSString, CAFilter;
@protocol BSXPCSecureCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BSUIVibrancyLUT : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *lutIdentifier; // ivar: _lutIdentifier
@property (readonly, copy, nonatomic) CAFilter *resolvedLUTFilter;
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 bundleURL:(id)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif