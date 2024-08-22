// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTBANDINFO_H
#define CTBANDINFO_H

@class NSMutableDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTBandInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *fActiveBands; // ivar: _fActiveBands
@property (retain, nonatomic) NSMutableDictionary *fSupportedBands; // ivar: _fSupportedBands


+(BOOL)supportsSecureCoding;
-(BOOL)addActiveBand:(id)arg0 forRat:(id)arg1 ;
-(BOOL)addActiveBands:(id)arg0 forRat:(id)arg1 ;
-(BOOL)addSupportedBand:(id)arg0 forRat:(id)arg1 ;
-(BOOL)addSupportedBands:(id)arg0 forRat:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)activeBands;
-(id)activeBandsForRat:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithActiveBands:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSupported:(id)arg0 andActiveBands:(id)arg1 ;
-(id)initWithSupportedBands:(id)arg0 ;
-(id)supportedBands;
-(id)supportedBandsForRat:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif