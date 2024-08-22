// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLPRFSTINGSETTINGSMODELDATA_H
#define CSLPRFSTINGSETTINGSMODELDATA_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CSLPRFStingSettingsModelData : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDictionary *actionsDictionary; // ivar: _actionsDictionary
@property (retain, nonatomic) NSDictionary *secondaryActionsDictionary; // ivar: _secondaryActionsDictionary
@property (retain, nonatomic) NSDictionary *shortcutsDictionary; // ivar: _shortcutsDictionary
@property (retain, nonatomic) NSDictionary *startWorkoutsDictionary; // ivar: _startWorkoutsDictionary
@property (retain, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)fromExportData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)toExportData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif