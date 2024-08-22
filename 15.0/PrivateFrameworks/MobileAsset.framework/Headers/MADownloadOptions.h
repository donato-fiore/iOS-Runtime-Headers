// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MADOWNLOADOPTIONS_H
#define MADOWNLOADOPTIONS_H

@class NSMutableDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MADownloadOptions : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *additionalServerParams; // ivar: _additionalServerParams
@property (nonatomic) BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property (nonatomic) BOOL allowsExpensiveAccess; // ivar: _allowsExpensiveAccess
@property (nonatomic) BOOL canUseLocalCacheServer; // ivar: _canUseLocalCacheServer
@property (nonatomic) BOOL discretionary; // ivar: _discretionary
@property (nonatomic) BOOL liveServerCatalogOnly; // ivar: _liveServerCatalogOnly
@property (nonatomic) BOOL liveServerCatalogOnlyIsOverridden; // ivar: _liveServerCatalogOnlyIsOverridden
@property (nonatomic) BOOL prefersInfraWiFi; // ivar: _prefersInfraWiFi
@property (nonatomic) BOOL requiresPowerPluggedIn; // ivar: _requiresPowerPluggedIn
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (nonatomic) NSInteger timeoutIntervalForResource; // ivar: _timeoutIntervalForResource


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logOptions;


@end


#endif