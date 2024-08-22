// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKASMROSTERBACKEDAPPLEIDPROVIDER_H
#define CRKASMROSTERBACKEDAPPLEIDPROVIDER_H

@class NSString;
@protocol CRKAppleIDProviding, CRKASMRosterProviding;

#import <Foundation/Foundation.h>


@interface CRKASMRosterBackedAppleIDProvider : NSObject <CRKAppleIDProviding>



@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSObject<CRKASMRosterProviding> *rosterProvider; // ivar: _rosterProvider


-(id)initWithRosterProvider:(id)arg0 ;


@end


#endif