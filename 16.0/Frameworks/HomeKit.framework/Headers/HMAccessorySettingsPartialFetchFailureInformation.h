// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSORYSETTINGSPARTIALFETCHFAILUREINFORMATION_H
#define HMACCESSORYSETTINGSPARTIALFETCHFAILUREINFORMATION_H

@class NSMutableDictionary, NSArray, NSString, NSDictionary;
@protocol HMFObject, HMMessageEncoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HMAccessorySettingsPartialFetchFailureInformation : NSObject <HMFObject, HMMessageEncoding, NSCopying, NSMutableCopying>

 {
    NSMutableDictionary *_mutableFailureTypes;
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *failureTypes;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)fetchFailureTypeForKeyPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)failedKeyPaths;
-(id)init;
-(id)initWithFailureTypes:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)payloadCopy;
-(void)setFetchFailureType:(NSInteger)arg0 forKeyPath:(id)arg1 ;


@end


#endif