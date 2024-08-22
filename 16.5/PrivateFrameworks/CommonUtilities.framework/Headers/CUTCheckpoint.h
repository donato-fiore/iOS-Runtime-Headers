// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUTCHECKPOINT_H
#define CUTCHECKPOINT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CUTCheckpoint : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _frozen;
}


@property (nonatomic) BOOL assertsUseAfterFreeze; // ivar: _assertsUseAfterFreeze
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL shouldLogTouches; // ivar: _shouldLogTouches
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)_allowlistedClasses;
+(id)_reportDateFormatter;
-(BOOL)_assertNotFrozen;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFrozen;
-(id)_freezeBacktrace;
-(id)_reportEndDate;
-(id)_reportMetadata;
-(id)_reportName;
-(id)_reportStartDate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)report;
-(void)_appendReportToMutableString:(id)arg0 indentation:(NSInteger)arg1 paddedNameLength:(NSInteger)arg2 ;
-(void)_freeze;
-(void)encodeWithCoder:(id)arg0 ;
-(void)freeze;


@end


#endif