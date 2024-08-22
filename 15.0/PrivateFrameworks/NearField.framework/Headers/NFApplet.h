// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFAPPLET_H
#define NFAPPLET_H

@class NSString, NSArray, NSData;
@protocol NSSecureCoding, NFAppletCollection;

#import <Foundation/Foundation.h>

#import "NFApplet.h"

@interface NFApplet : NSObject <NSSecureCoding>

 {
    NSString *_groupHeadID;
    NSArray *_groupMemberIDs;
    NSArray *_referencedAppIDs;
    BOOL _isContainer;
    BOOL _isProxy;
    NSString *_packageIdentifier;
    NSString *_moduleIdentifier;
    NSArray *_multiSEApplicationGroupMemberIDs;
    unsigned char _appletGPState;
    unsigned char _groupActivationStyle;
    NSObject<NFAppletCollection> *_appletCollection;
    NSData *_typeFSystemCode;
}


@property (readonly, nonatomic) unsigned char activationState; // ivar: _activationState
@property (readonly, nonatomic) BOOL authTransientConfigurable; // ivar: _authTransientConfigurable
@property (readonly, nonatomic) BOOL authTransientSupport; // ivar: _authTransientSupport
@property (readonly, nonatomic) BOOL containsSubKeys;
@property (readonly, retain, nonatomic) NSData *discretionaryData; // ivar: _discretionaryData
@property (readonly, nonatomic) unsigned char family; // ivar: _family
@property (readonly, retain, nonatomic) NFApplet *groupHead;
@property (readonly, retain, nonatomic) NSArray *groupMembers;
@property (readonly, retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, retain, nonatomic) NSData *identifierAsData; // ivar: _identifierAsData
@property (readonly, nonatomic) BOOL isGPLocked;
@property (readonly, nonatomic) BOOL isTypeF;
@property (readonly, nonatomic) unsigned char lifecycleState;
@property (readonly, retain, nonatomic) NSString *packageIdentifier;
@property (readonly, retain, nonatomic) NSArray *referencedApps;
@property (readonly, retain, nonatomic) NSString *seIdentifier; // ivar: _seIdentifier
@property (readonly, nonatomic) unsigned char supportedTypeFSystem;
@property (readonly, nonatomic) BOOL suppressTypeB;


+(BOOL)supportsSecureCoding;
+(id)aidListForPrinting:(id)arg0 ;
-(BOOL)isContainer;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToApplet:(id)arg0 ;
-(BOOL)isPPSEControllable;
-(BOOL)isProxy;
-(NSUInteger)rawGPState;
-(id)appletCollection;
-(id)asDictionary;
-(id)description;
-(id)groupMemberIDs;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)moduleIdentifier;
-(id)multiSEGroupMemberIDs;
-(id)multiSSDMembers;
-(unsigned char)groupActivationStyle;
-(void)_setIsActive:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAppletCollection:(id)arg0 ;


@end


#endif