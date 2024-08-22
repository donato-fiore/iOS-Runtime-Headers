// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDMDCSCONTEXTUALPREDICATE_H
#define _CDMDCSCONTEXTUALPREDICATE_H

@class CDContextualPredicate, NSString, NSDictionary;
@protocol _CDDictionaryEncoding;



@interface _CDMDCSContextualPredicate : CDContextualPredicate <_CDDictionaryEncoding>



@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSDictionary *parameters; // ivar: _parameters


+(BOOL)supportsSecureCoding;
+(id)_predicateForChangeAtKeyPath:(id)arg0 identifier:(id)arg1 ;
+(id)_predicateForKeyPath:(id)arg0 equalToValue:(id)arg1 identifier:(id)arg2 ;
+(id)_predicateForKeyPath:(id)arg0 withPredicate:(id)arg1 identifier:(id)arg2 ;
+(id)andPredicateWithSubpredicates:(id)arg0 identifier:(id)arg1 ;
+(id)contextualPredicateForKeyPaths:(id)arg0 withPredicate:(id)arg1 identifier:(id)arg2 ;
+(id)notPredicateWithSubpredicate:(id)arg0 identifier:(id)arg1 ;
+(id)orPredicateWithSubpredicates:(id)arg0 identifier:(id)arg1 ;
+(id)predicateForBacklightOnStatus;
+(id)predicateForFirstPartyWorkoutMatchingTypes:(id)arg0 states:(id)arg1 ;
+(id)predicateForForegroundApp;
+(id)predicateForIsConnectedToAudioBluetoothDevice;
+(id)predicateForIsConnectedToCar;
+(id)predicateForNetworkQualityBad;
+(id)predicateForNetworkQualityFair;
+(id)predicateForNextAlarm;
+(id)predicateForPhotosAppBecameForeground;
+(id)predicateForUserIsArrivingAtHome;
+(id)predicateForUserIsLeavingHome;
+(id)predicateWithIdentifier:(id)arg0 ;
+(id)predicates;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 parameters:(id)arg1 ;
-(id)initWithPlistDictionary:(id)arg0 ;
-(id)plistDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif