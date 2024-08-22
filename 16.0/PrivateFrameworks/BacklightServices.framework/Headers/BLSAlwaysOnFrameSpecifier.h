// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSALWAYSONFRAMESPECIFIER_H
#define BLSALWAYSONFRAMESPECIFIER_H

@class NSArray, NSDateInterval;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BLSAlwaysOnFrameSpecifier : NSObject <NSCopying>

 {
    NSInteger _grantedFidelity;
    os_unfair_lock_s _lock;
}


@property (readonly) NSArray *entrySpecifiers; // ivar: _entrySpecifiers
@property NSInteger grantedFidelity;
@property (readonly) NSDateInterval *presentationInterval; // ivar: _presentationInterval
@property (readonly) NSInteger requestedFidelity;


+(id)loggingStringForPresentationInterval:(id)arg0 ;
+(id)shortLoggingStringForPresentationInterval:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)correctedSpecifierWithNextSpecifier:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)entrySpecifierForTimelineIdentifier:(id)arg0 ;
-(id)initWithTimelineEntry:(id)arg0 previousTimelineEntry:(id)arg1 ;
-(id)initWithTimelineEntrySpecifiers:(id)arg0 presentationInterval:(id)arg1 ;


@end


#endif