// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCOREPOLICYSOFTWAREUPDATESCAN_H
#define SUCOREPOLICYSOFTWAREUPDATESCAN_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUCorePolicySoftwareUpdateScan : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDictionary *additionalOptions; // ivar: _additionalOptions
@property (retain, nonatomic) NSDictionary *additionalServerParams; // ivar: _additionalServerParams
@property (nonatomic) BOOL allowSameVersion; // ivar: _allowSameVersion
@property (nonatomic) BOOL allowsCellular; // ivar: _allowsCellular
@property (nonatomic) BOOL discretionary; // ivar: _discretionary
@property (nonatomic) int downloadTimeoutSecs; // ivar: _downloadTimeoutSecs
@property (nonatomic) BOOL liveServerCatalogOnly; // ivar: _liveServerCatalogOnly
@property (retain, nonatomic) NSString *rampingScanType; // ivar: _rampingScanType
@property (nonatomic) BOOL requiresPowerPluggedIn; // ivar: _requiresPowerPluggedIn
@property (nonatomic) BOOL restrictToFull; // ivar: _restrictToFull
@property (nonatomic) BOOL restrictToIncremental; // ivar: _restrictToIncremental
@property (nonatomic) NSInteger scanUpdateType; // ivar: _scanUpdateType
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property NSInteger specifiedFields; // ivar: _specifiedFields


+(BOOL)supportsSecureCoding;
+(id)nameForScanUpdateType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldScanForMajorUpdates;
-(BOOL)shouldScanForMinorUpdates;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)backToDefaults;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif