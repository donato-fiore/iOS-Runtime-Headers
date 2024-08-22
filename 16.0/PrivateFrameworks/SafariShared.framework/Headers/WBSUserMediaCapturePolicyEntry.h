// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSUSERMEDIACAPTUREPOLICYENTRY_H
#define WBSUSERMEDIACAPTUREPOLICYENTRY_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface WBSUserMediaCapturePolicyEntry : NSObject

@property (retain, nonatomic) NSMutableDictionary *ephemeralSalts; // ivar: _ephemeralSalts
@property (retain, nonatomic) NSString *origin; // ivar: _origin
@property (nonatomic) NSUInteger permission; // ivar: _permission
@property (nonatomic) CGFloat permissionExpirationDate; // ivar: _permissionExpirationDate
@property (nonatomic) CGFloat permissionGrantDate; // ivar: _permissionGrantDate
@property (retain, nonatomic) NSString *persistentSalt; // ivar: _persistentSalt
@property (retain, nonatomic) NSString *topLevelOrigin; // ivar: _topLevelOrigin


-(BOOL)_isValidUserMediaPermission:(NSUInteger)arg0 ;
-(BOOL)isValid;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithPermission:(NSUInteger)arg0 expirationPolicy:(NSUInteger)arg1 forOrigin:(id)arg2 topLevelOrigin:(id)arg3 ;
-(void)updatePermission:(NSUInteger)arg0 expirationPolicy:(NSUInteger)arg1 ;


@end


#endif