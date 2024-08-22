// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKREPORTERATTRIBUTES_H
#define DKREPORTERATTRIBUTES_H

@class NSString, NSExtension, NSSet, NSUUID;
@protocol DKExtensionAttributes, NSCopying;

#import <Foundation/Foundation.h>


@interface DKReporterAttributes : NSObject <DKExtensionAttributes, NSCopying>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic, getter=isHeadless) BOOL headless; // ivar: _headless
@property (readonly, nonatomic) NSSet *manifest; // ivar: _manifest
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSString *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToReportGeneratorAttributes:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithExtension:(id)arg0 ;
-(void)_validateAndAddDomain:(id)arg0 withInfo:(id)arg1 toManifest:(id)arg2 ;
-(void)_validateAndAddExtensionManifest:(id)arg0 toManifest:(id)arg1 ;


@end


#endif