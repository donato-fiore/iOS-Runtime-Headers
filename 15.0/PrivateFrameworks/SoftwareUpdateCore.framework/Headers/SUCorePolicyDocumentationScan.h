// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREPOLICYDOCUMENTATIONSCAN_H
#define SUCOREPOLICYDOCUMENTATIONSCAN_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUCorePolicyDocumentationScan : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDictionary *additionalOptions; // ivar: _additionalOptions
@property (retain, nonatomic) NSDictionary *additionalServerParams; // ivar: _additionalServerParams
@property (nonatomic) BOOL allowsCellular; // ivar: _allowsCellular
@property (nonatomic) BOOL discretionary; // ivar: _discretionary
@property (nonatomic) int downloadTimeoutSecs; // ivar: _downloadTimeoutSecs
@property (nonatomic) BOOL liveServerCatalogOnly; // ivar: _liveServerCatalogOnly
@property (nonatomic) BOOL requiresPowerPluggedIn; // ivar: _requiresPowerPluggedIn
@property NSInteger specifiedFields; // ivar: _specifiedFields


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)backToDefaults;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif