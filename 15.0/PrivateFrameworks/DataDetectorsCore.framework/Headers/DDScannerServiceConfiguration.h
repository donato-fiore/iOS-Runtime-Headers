// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDSCANNERSERVICECONFIGURATION_H
#define DDSCANNERSERVICECONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DDScannerServiceConfiguration : NSObject <NSCopying, NSSecureCoding>

 {
    int _scannerType;
    BOOL _spotlightSuggestionsEnabled;
    NSString *_recyclingIdentifier;
    *NSInteger _jobIdentifierPtr;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (nonatomic) BOOL noObjC; // ivar: _noObjC
@property (nonatomic) BOOL remoteScannerEnabled; // ivar: _remoteScannerEnabled
@property (nonatomic) NSInteger resultsOptions; // ivar: _resultsOptions
@property (nonatomic) NSInteger scannerOptions; // ivar: _scannerOptions
@property (nonatomic) BOOL spotlightSuggestionsEnabled;
@property (nonatomic) CGFloat timeout; // ivar: _timeout


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initEmpty;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScannerType:(int)arg0 passiveIntent:(BOOL)arg1 ;
-(id)recyclingIdentifier;
-(int)scannerType;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateRecyclingIdentifier;


@end


#endif