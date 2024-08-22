// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRITASKATTRIBUTIONINTERNALINSECURE_H
#define TRITASKATTRIBUTIONINTERNALINSECURE_H

@class NSString, TRIDownloadOptions;
@protocol TRITaskAttributing, NSCopying;

#import <Foundation/Foundation.h>


@interface TRITaskAttributionInternalInsecure : NSObject <TRITaskAttributing, NSCopying>



@property (readonly, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TRIDownloadOptions *networkOptions; // ivar: _networkOptions
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier
@property (readonly, nonatomic) int triCloudKitContainer; // ivar: _triCloudKitContainer


+(id)taskAttributionFirstPartyWithNetworkOptions:(id)arg0 ;
+(id)taskAttributionFromPersistedTask:(id)arg0 ;
+(id)taskAttributionWithTeamIdentifier:(id)arg0 triCloudKitContainer:(int)arg1 applicationBundleIdentifier:(id)arg2 networkOptions:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTaskAttribution:(id)arg0 ;
-(id)asPersistedTaskAttribution;
-(id)copyWithReplacementApplicationBundleIdentifier:(id)arg0 ;
-(id)copyWithReplacementNetworkOptions:(id)arg0 ;
-(id)copyWithReplacementTeamIdentifier:(id)arg0 ;
-(id)copyWithReplacementTriCloudKitContainer:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTeamIdentifier:(id)arg0 triCloudKitContainer:(int)arg1 applicationBundleIdentifier:(id)arg2 networkOptions:(id)arg3 ;


@end


#endif