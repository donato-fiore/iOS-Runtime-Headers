// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRSOFTWAREUPDATEPROVIDERNOTIFYUPDATEPARAMS_H
#define HMMTRSOFTWAREUPDATEPROVIDERNOTIFYUPDATEPARAMS_H

@class NSNumber, NSString, NSData;

#import <Foundation/Foundation.h>


@interface HMMTRSoftwareUpdateProviderNotifyUpdateParams : NSObject

@property (readonly) NSNumber *didTimeout; // ivar: _didTimeout
@property (readonly) NSNumber *previousSoftwareVersionNumberForMetrics; // ivar: _previousSoftwareVersionNumberForMetrics
@property (readonly) NSNumber *softwareVersion; // ivar: _softwareVersion
@property (readonly) NSString *transportTypeForMetrics; // ivar: _transportTypeForMetrics
@property (readonly) NSData *updateToken; // ivar: _updateToken


-(id)initWithUpdateToken:(id)arg0 softwareVersion:(id)arg1 didTimeout:(id)arg2 ;
-(id)initWithUpdateToken:(id)arg0 softwareVersion:(id)arg1 transportTypeForMetrics:(id)arg2 previousSoftwareVersionNumberForMetrics:(id)arg3 didTimeout:(id)arg4 ;


@end


#endif