// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXBUDDYDATAPACKAGE_H
#define AXBUDDYDATAPACKAGE_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXBuddyDataPackage : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *accessibilityOptions; // ivar: _accessibilityOptions
@property (retain, nonatomic) NSString *axModel; // ivar: _axModel
@property (retain, nonatomic) NSString *axOSVersion; // ivar: _axOSVersion
@property (retain, nonatomic) NSString *axPreferredContentSizeCategoryName; // ivar: _axPreferredContentSizeCategoryName
@property (nonatomic) BOOL usesExtendedSlider; // ivar: _usesExtendedSlider


+(BOOL)supportsSecureCoding;
+(id)dataBlobForBuddy;
+(id)dataPackageForCurrentSettings;
+(id)deviceClassForBuddy;
+(id)productVersionForBuddy;
+(id)testData;
+(void)restoreDataBlobForBuddy:(id)arg0 ;
+(void)setTestData:(id)arg0 ;
+(void)setTestData:(id)arg0 forModel:(id)arg1 hasHomeButton:(BOOL)arg2 largeTextUsesExtendedRange:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)applySavedSettings;
-(void)encodeWithCoder:(id)arg0 ;
-(void)processDomainDictionary:(id)arg0 ;


@end


#endif