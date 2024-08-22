// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCORERESTOREVERSION_H
#define SUCORERESTOREVERSION_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUCoreRestoreVersion : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger buildGroup; // ivar: _buildGroup
@property (readonly, nonatomic) NSInteger buildVersion; // ivar: _buildVersion
@property (readonly, nonatomic) NSInteger majorVersion; // ivar: _majorVersion
@property (readonly, nonatomic) NSInteger minorVersion; // ivar: _minorVersion
@property (retain, nonatomic) NSArray *parsedVersion; // ivar: _parsedVersion
@property (retain, nonatomic) NSString *restoreVersionString; // ivar: _restoreVersionString
@property (readonly, nonatomic) NSInteger suffixVersion; // ivar: _suffixVersion
@property (readonly, nonatomic) NSInteger syncedVersion; // ivar: _syncedVersion


+(BOOL)supportsSecureCoding;
+(id)_stringForNSComparisonResult:(NSInteger)arg0 ;
-(BOOL)_isStringOnlyNumbers:(id)arg0 ;
-(BOOL)isComparable:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRestoreVersion:(id)arg0 ;
-(id)summary;
-(void)_parseRestoreVersionString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif